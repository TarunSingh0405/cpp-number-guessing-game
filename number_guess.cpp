#include<iostream>
int main()
{
    int l=1,u=100,mid,answer; 
    std::cout<<"Think a number between 1 to 100";
    std::cout<<"\nif thought then press enter";
    std::cin.get();
    std::cout<<"\nI think you have guess the number";
    std::cin.get();
    std::cout<<"\nDon't disclose the number";
    std::cin.get();
    std::cout<<"\nJust answer in greater than or less than";
    std::cin.get();
        while(l<=u)
        {
            mid=(l+u)/2;
            std::cout<<"\nIs your number\n "<<mid;
            std::cout<<"\nIf yess press 0\n if your number is greater than the number shown then press 1\n if your number is smaller than the number shown then press 2";
            std::cout<<"\nEnter your answer ";
            std::cin>>answer;
            if(answer==0)
            {   
                std::cout<<"Your guess number is "<<mid<<'\n';
                break;
            }
            else if(answer==1)
            {
                l=mid+1;
            }
            else if(answer==2)
            {
                u=mid-1;
            }
            else
            {
                std::cout<<"enter a valid number";
            }
        }
    std::cout<<"The number is which you are thinking is "<<mid;
    return 0;
}