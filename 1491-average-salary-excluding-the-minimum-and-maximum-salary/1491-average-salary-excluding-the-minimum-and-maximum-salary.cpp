class Solution {
			public:
				double average(vector<int>& salary) 
				{
					double t=0.0;
					sort(salary.begin(),salary.end());
					for(int i=1;i<salary.size()-1;i++)
					{
						t+=salary[i];
					}
					return t/(salary.size()-2);

				}
			};