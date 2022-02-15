/**
 * Definition for a Record
 * class Record {
 * public:
 *   int id, score;
 *   Record(int id, int score) {
 *     this->id = id;
 *     this->score = score;
 *   }
 * };
 */
class Solution {
public:
    /**
     * @param results a list of <student_id, score>
     * @return find the average of 5 highest scores for each person
     * map<int, double> (student_id, average_score)
     */
    map<int, double> highFive(vector<Record>& results) {
        // Write your code here
        sort(results.begin(),results.end(),[](Record &a, Record &b){
            if(a.id==b.id)
                return a.score>b.score;
            return a.id<b.id;
        });

        // for(auto &i:results)
        // {
        //     cout<<"{"<<i.id<<","<<i.score<<"}";
        // }
        cout<<endl;
        int count=0;
        int uniq=results[0].id;
        double sum=0.0;
        map<int,double>m;
        for(auto &i:results)
        {
            if(uniq==i.id && count<5)
            {
                count++;
                sum+=(double)i.score;
            }
            
            if(count==5)
            {
                count++;
                m[uniq]=sum/5;
              //  cout<<sum/5<<" ";
                sum=0.0;

            }
            if(uniq!=i.id)
            {
                uniq=i.id;
                sum=0;
                count=1;
                sum+=(double)i.score;
            }
           // cout<<sum<<" ";
        }
        return m;
    }
};