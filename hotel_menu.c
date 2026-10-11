#include<stdio.h>
int main()
{
    int ch, mainch, whilech=0,totalbill=0,vegch=0,nonvegch=0;
    int Rice=0,Sabji=0,Roti=0,Desert=0,Colddrink=0;
    int Chowmein=0,Seafood=0,Noodles=0,Meat=0,Starter=0;
    float gst=0.05;    //use float bcz gst is in %
    do
    {
        printf("---welcome to hotel crazy zone---");
        printf("\n main menu:");
        printf("\n 1.veg:");
        printf("\n 2.nonveg:");
        printf("\n enter your choice:");
        scanf("%d",&mainch);
        switch(mainch)

        {
            case 1:
            do
            {
                printf("\n Veg menu:");
                printf("\n 1.Rice");
                printf("\n 2.Sabji");
                printf("\n 3.Roti");
                printf("\n 4.Desert");
                printf("\n 5.Cold drink");
                printf("\n Enter your choise:");
                scanf("%d",&vegch);
                switch(vegch)
                {
                    case 1:
                    printf("\n Rice:");
                    printf("\n 1.Jeera rice     \t -120Rs");
                    printf("\n 2.Dal khichadi   \t -100Rs");
                    printf("\n 3.Plain rice     \t -80Rs");
                    printf("\n 4.Stream rice    \t -80Rs");
                    printf("\n 5.Lamon rice     \t -80Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Rice);  
                    switch(Rice)
                    {
                        case 1:                        
                        printf("\n 1.Jeera rice     \t -120Rs ");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Rice);
                        totalbill+=Rice*120*gst;
                        break;
                        case 2:
                        printf("\n 2.Dal khichadi   \t -100Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Rice);
                        totalbill+=Rice*100;
                        break;
                        case 3:
                        printf("\n 3.Plain rice     \t -80Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Rice);
                        totalbill+=Rice*80;
                        break;
                        case 4:
                        printf("\n 4.Stream rice   \t -80Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Rice);
                        totalbill+=Rice*80;
                        break;
                        case 5:
                        printf("\n 5.Lamon rice     \t -80Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Rice);
                        totalbill+=Rice*80;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;

                    }
                    printf("\n bill details:");
                    printf("\n 1.Jeera rice     \t -120Rs %d",Rice*120*gst);
                    printf("\n 2.Dal khichadi   \t -100Rs %d",Rice*100);
                    printf("\n 3.Plain rice     \t -80Rs %d",Rice*80);
                    printf("\n 4.Stream rice    \t -80Rs %d",Rice*80);
                    printf("\n 5.Lamon rice     \t -80Rs %d",Rice*80);
                    printf("\n gst+Total Bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break;             

                    case 2:
                    printf("\n Sabji:");
                    printf("\n 1.Butter paneer   \t-180Rs");
                    printf("\n 2.Palak paneer    \t-160Rs");
                    printf("\n 3.Potato stew     \t-170Rs");
                    printf("\n 4.Dal fry         \t-140Rs");
                    printf("\n 5.Shahi paneer    \t -150Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Sabji);  
                    switch(Sabji)
                    {
                        case 1:
                        printf("\n 1.butter paneer   \t-180Rs ");
                        printf("\n How many plate do you want?:");
                        scanf("%d",& Sabji);
                        totalbill+=Sabji*180;
                        break;
                        case 2:
                        printf("\n 2.palak paneer    \t-160Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Sabji);
                        totalbill+=Sabji*160;
                        break;
                        case 3:
                        printf("\n 3.potato stew     \t-170Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Sabji);
                        totalbill+=Sabji*170;
                        break;
                        case 4:
                        printf("\n 4.dal fry         \t-140Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Sabji);
                        totalbill+=Sabji*140;
                        break;
                        case 5:
                        printf("\n 5.shahi paneer    \t -150Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Sabji);
                        totalbill+=Sabji*150;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    }
                    printf("\n bill details:");
                    printf("\n 1.Butter paneer   \t -120Rs %d",Sabji*180);
                    printf("\n 2.Palak paneer    \t -100Rs %d",Sabji*160);
                    printf("\n 3.Potato stew     \t -80Rs %d",Sabji*170);
                    printf("\n 4.Dal fry         \t -80Rs %d",Sabji*140);
                    printf("\n 5.Shahi paneer    \t -80Rs %d",Sabji*150);
                    printf("\n gst+total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break; 

                    case 3:
                    printf("\n Roti:");
                    printf("\n 1.Butter naan     \t -60Rs");
                    printf("\n 2.Plain naan      \t -40Rs");
                    printf("\n 3.Tandoori roti   \t -35Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Roti);  
                    switch(Roti)
                    {
                        case 1:
                        printf("\n 1.butter naan     \t -60Rs ");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Roti);
                        totalbill+=Roti*60;
                        break;
                        case 2:
                        printf("\n 2.plain naan      \t -40Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Roti);
                        totalbill+=Roti*40;
                        break;
                        case 3:
                        printf("\n 3.tandoori roti   \t -35Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Roti);
                        totalbill+=Roti*35;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    
                    }
                    printf("\n bill details:");
                    printf("\n 1.Butter naan       \t -120Rs %d",Roti*60);
                    printf("\n 2.Plain naan        \t -100Rs %d",Roti*40);
                    printf("\n 3.Tandoori roti     \t -80Rs %d",Roti*35);
                    printf("\n gst+Total Bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break; 

                    case 4:
                    printf("\n Desert:");
                    printf("\n 1.Brownie     \t -200Rs");
                    printf("\n 2.Cheescake   \t -300Rs");
                    printf("\n 3.Dunut       \t -180Rs");
                    printf("\n 4.Ice-cream   \t -120Rs");
                    printf("\n 5.Pudding     \t -150Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Desert);  
                    switch(Desert)
                    {
                        case 1:
                        printf("\n 1.brownie     \t -200Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Desert);
                        totalbill+=Desert*200;
                        break;
                        case 2:
                        printf("\n 2.cheescake   \t -300Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Desert);
                        totalbill+=Desert*300;
                        break;
                        case 3:
                        printf("\n 3.dunut       \t -180Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Desert);
                        totalbill+=Desert*180;
                        break;
                        case 4:
                        printf("\n 4.ice-cream   \t -120Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Desert);
                        totalbill+=Desert*120;
                        break;
                        case 5:
                        printf("\n 5.pudding     \t -150Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Desert);
                        totalbill+=Desert*150;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    
                    }
                    printf("\n bill details:");
                    printf("\n 1.Brownie         \t -120Rs %d",Desert*200);
                    printf("\n 2.Cheescake       \t -100Rs %d",Desert*300);
                    printf("\n 3.Dunut           \t -80Rs %d",Desert*180);
                    printf("\n 4.Ice-cream       \t -80Rs %d",Desert*120);
                    printf("\n 5.Pudding         \t -80Rs %d",Desert*150);
                    printf("\n gst+total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break; 

                    case 5:
                    printf("\n Cold drinks:");
                    printf("\n 1.Coke           \t -200Rs");
                    printf("\n 2.Sprite         \t -70Rs");
                    printf("\n 3.Coffee frappe  \t -120Rs");
                    printf("\n 4.Iced mocha     \t -180Rs");
                    printf("\n 5.Iced chocolate \t -150Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Colddrink);
                    switch (Colddrink)
                    {
                        case 1:
                        printf("\n 1.coke           \t -200Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Colddrink);
                        totalbill+=Colddrink*200;
                        break;
                        case 2:
                        printf("\n 2.sprite         \t -70Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Colddrink);
                        totalbill+=Colddrink*70;
                        break;
                        case 3:
                        printf("\n 3.coffee frappe  \t -120Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Colddrink);
                        totalbill+=Colddrink*120;
                        break;
                        case 4:
                        printf("\n 4.iced mocha     \t -180Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Colddrink);
                        totalbill+=Colddrink*180;
                        break;
                        case 5:
                        printf("\n 5.iced chocolate \t -150Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Colddrink);
                        totalbill+=Colddrink*150;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    }
                    printf("\n bill details:");
                    printf("\n 1.coke           \t -200Rs %d",Colddrink*200);
                    printf("\n 2.sprite         \t -70Rs %d",Colddrink*70);
                    printf("\n 3.coffee frappe  \t -120Rs %d",Colddrink*120);
                    printf("\n 4.iced mocha     \t -180Rs %d",Colddrink*180);
                    printf("\n 5.iced chocolate \t -150Rs %d",Colddrink*150);
                    printf("\n total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break; 
                }
            } while (whilech==1);
            break;
            case 2:
            do
            {
                printf("\n Nonveg menu:");
                printf("\n 1.Chowmein");
                printf("\n 2.Sea food");
                printf("\n 3.Noodles");
                printf("\n 4.Meat");
                printf("\n 5.Starter");
                printf("\n Enter your choise:");
                scanf("%d",&nonvegch);
                switch(nonvegch)
                {
                    case 1:
                    printf("\n Chowmein:");
                    printf("\n 1.chicken chowmein    \t -130Rs");
                    printf("\n 2.prawn chowmein      \t -100Rs");
                    printf("\n 3.beef chowmein       \t -140Rs");
                    printf("\n 4.pork chowmein       \t -130Rs");
                    printf("\n 5.egg chowmein        \t -120Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Chowmein);  
                    switch(Chowmein)
                    {
                        case 1:
                        printf("\n 1.chicken chowmein    \t -130Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Chowmein);
                        totalbill+=Chowmein*130;
                        break;
                        case 2:
                        printf("\n 2.prawn chowmein      \t -100Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Chowmein);
                        totalbill+=Chowmein*100;
                        break;
                        case 3:
                        printf("\n 3.beef chowmein       \t -140Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Chowmein);
                        totalbill+=Chowmein*140;
                        break;
                        case 4:
                        printf("\n 4.pork chowmein       \t -130Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Chowmein);
                        totalbill+=Chowmein*130;
                        break;
                        case 5:
                        printf("\n 5.egg chowmein        \t -120Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Chowmein);
                        totalbill+=Chowmein*120;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
            
                    }
                    printf("\n bill details:");
                    printf("\n 1.chicken chowmein    \t -130Rs %d",Chowmein*130);
                    printf("\n 2.prawn chowmein      \t -100Rs %d",Chowmein*100);
                    printf("\n 3.beef chowmein       \t -140Rs %d",Chowmein*140);
                    printf("\n 4.pork chowmein       \t -130Rs %d",Chowmein*130);
                    printf("\n 5.egg chowmein        \t -120Rs %d",Chowmein*120);
                    printf("\n total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break;

                    case 2:
                    printf("\n Sea food:");
                    printf("\n 1.Shrimp     \t-180Rs");
                    printf("\n 2.Squid      \t-160Rs");
                    printf("\n 3.Crab       \t-170Rs");
                    printf("\n 4.Salmon     \t-140Rs");
                    printf("\n 5.Seer fish  \t -150Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Seafood);  
                    switch(Seafood)
                    {
                        case 1:
                        printf("\n 1.shrimp     \t-180Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Seafood);
                        totalbill+=Seafood*180;
                        break;
                        case 2:
                        printf("\n 2.squid      \t-160Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Seafood);
                        totalbill+=Seafood*160;
                        break;
                        case 3:
                        printf("\n 3.crab       \t-170Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Seafood);
                        totalbill+=Seafood*170;
                        break;
                        case 4:
                        printf("\n 4.salmon     \t-140Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Seafood);
                        totalbill+=Seafood*140;
                        break;
                        case 5:
                        printf("\n 5.seer fish  \t -150Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Seafood);
                        totalbill+=Seafood*150;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    }
                    printf("\n bill details:");
                    printf("\n 1.shrimp     \t-180Rs %d",Seafood*180);
                    printf("\n 2.squid      \t-160Rs %d",Seafood*160);
                    printf("\n 3.crab       \t-170Rs %d",Seafood*170);
                    printf("\n 4.salmon     \t-140Rs %d",Seafood*140);
                    printf("\n 5.seer fish  \t -150Rs %d",Seafood*150);
                    printf("\n total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break;

                    case 3:
                    printf("\n Noodles:");
                    printf("\n 1.Hakka noodles     \t -260Rs");
                    printf("\n 2.Egg noodles       \t -190Rs");
                    printf("\n 3.Schezwan noodles  \t -225Rs");
                    printf("\n Enter your choise:");
                    scanf("%d",&Noodles);  
                    switch(Noodles)
                    {
                        case 1:
                        printf("\n 1.hakka noodles     \t -260Rs ");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Noodles);
                        totalbill+=Noodles*260;
                        break;
                        case 2:
                        printf("\n 2.egg noodles       \t -190Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Noodles);
                        totalbill+=Noodles*190;
                        break;
                        case 3:
                        printf("\n 3.schezwan noodles  \t -225Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Noodles);
                        totalbill+=Noodles*225;
                        break;
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    }
                    printf("\n bill details:");
                    printf("\n 1.hakka noodles     \t -260Rs %d",Noodles*180);
                    printf("\n 2.egg noodles       \t -190Rs %d",Noodles*180);
                    printf("\n 3.schezwan noodles  \t -225Rs %d",Noodles*180);
                    printf("\n total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break;

                    case 4:
                    printf("\n Meat:");
                    printf("\n 1.Chicken     \t -200Rs");
                    printf("\n 2.Lamb        \t -300Rs");
                    printf("\n 3.Pork        \t -180Rs");
                    printf("\n 4.Prawns      \t -120Rs");                
                    printf("\n Enter your choise:");
                    scanf("%d",&Meat);  
                    switch(Meat)
                    {
                        case 1:
                        printf("\n 1.chicken     \t -200Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Meat);
                        totalbill+=Meat*200;
                        break;
                        case 2:
                        printf("\n 2.lamb        \t -300Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Meat);
                        totalbill+=Meat*300;
                        break;
                        case 3:
                        printf("\n 3.pork        \t -180Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Meat);
                        totalbill+=Meat*180;
                        break;
                        case 4:
                        printf("\n 4.prawns      \t -120Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Meat);
                        totalbill+=Meat*120;
                        break;                     
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    
                    }
                    printf("\n bill details:");
                    printf("\n 1.chicken     \t -200Rs %d",Meat*200);
                    printf("\n 2.lamb        \t -300Rs %d",Meat*300);
                    printf("\n 3.pork        \t -180Rs %d",Meat*180);
                    printf("\n 4.prawns      \t -120Rs %d",Meat*120);
                    printf("\n total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break;

                    case 5:
                    printf("\n Starter:");
                    printf("\n 1.Tikkas       \t -135Rs");
                    printf("\n 2.Kebab        \t -160Rs");
                    printf("\n 3.Fish fry     \t -1950Rs");                
                    printf("\n Enter your choise:");
                    scanf("%d",&Starter);
                    switch (Starter)
                    {
                        case 1:
                        printf("\n 1.tikkas       \t -135Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Starter);
                        totalbill+=Starter*135;
                        break;
                        case 2:
                        printf("\n 2.kebab        \t -160Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Starter);
                        totalbill+=Starter*160;
                        break;
                        case 3:
                        printf("\n 3.fish fry     \t -195Rs");
                        printf("\n How many plate do you want?:");
                        scanf("%d",&Starter);
                        totalbill+=Starter*195;
                        break;                    
                        default:
                        printf("\n you have entered wrong choice!");
                        break;
                    }
                    printf("\n bill details:");
                    printf("\n 1.tikkas       \t -135Rs %d",Starter*135);
                    printf("\n 2.kebab        \t -160Rs %d",Starter*160);
                    printf("\n 3.fish fry     \t -1950Rs %d",Starter*195);
                    printf("\n total bill=%d",totalbill); 
                    printf("\n Thank you!..Visit again!");
                    break;                    
                }
            } while (whilech==1);
        }     printf("  \n 1.continue \n 2.exit \nDo you want to continue:");         
    }while (whilech==1);
    
    scanf("%d",&whilech);
    return 0;
}   

    

                           
                            
