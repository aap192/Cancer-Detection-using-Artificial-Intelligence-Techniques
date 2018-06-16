#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

// Forward chaining
class F_H
{

public:
int flg_variable;
char condition_variable_list[2][7];
char variablelist[3][7];
char clausevariablelist[13][7];
int instantiated_list[3];

char c[7],vp[7],v[7];

char Cancer[100];
char Treatment[100];

int f, i, j, k, s;

int front_pointer;
int back_pointer ;
int statement_number;
int clause_number;

void check_instantiation(char cd[],int size)
{
	i =1;

	while((strcmp(v,variablelist[i])!=0) && (i<=2))
		  i=i+1;

	if (instantiated_list[i] != 1)
	{
		instantiated_list[i] = 1;

		//step2:

		for(int i=0;i<size;i++)
		Cancer[i]=cd[i];

		     if(strcmp(Cancer,"Bone Cancer")!=0 && strcmp(Cancer,"Eye Cancer")!=0 && strcmp(Cancer,"Breast Cancer")!=0 &&
				strcmp(Cancer,"Thyroid Cancer")!=0 && strcmp(Cancer,"Lung Cancer")!=0 && strcmp(Cancer,"Stomach Cancer")!=0 &&
				strcmp(Cancer,"Ovarian Cancer")!=0 && strcmp(Cancer,"Gallbladder Cancer")!=0 && strcmp(Cancer,"Kidney Cancer")!=0 &&
				strcmp(Cancer,"Leukemia Cancer")!=0 && strcmp(Cancer,"Liver Cancer")!=0 && strcmp(Cancer,"Prostate Cancer")!=0)

		{
			cout<<"\n";
			//goto step2;
		}
	}
}

void search_clause_variable()
{
	flg_variable = 0;

	statement_number = f;

	while((flg_variable ==0) && (statement_number<= 12))
	{
		clause_number=1;

		k = clause_number;

		while((strcmp(clausevariablelist[k],condition_variable_list[front_pointer])!= 0) && (clause_number<2))
            {

			clause_number = clause_number + 1;
			k = statement_number + clause_number;

		    }

		if (strcmp(clausevariablelist[k],condition_variable_list[front_pointer]) == 0)
        {

		flg_variable = 1;

		if (flg_variable == 0)
        statement_number = statement_number+1;

        }
	}
	if (flg_variable == 0)
    {
        statement_number = 0;
    }
}

void instantiate()
{
	i=1;

	while((strcmp(v,variablelist[i])!= 0)&&(i<2))

    i = i+1;

	instantiated_list[i] = 1;
	i = 1;

	while((strcmp(v,condition_variable_list[i])!= 0)&& (i<2))
    {
     i = i+1;
    }

	if (strcmp(v, condition_variable_list[i]) != 0)
	{
		strcpy(condition_variable_list[back_pointer], v);

		back_pointer = back_pointer +1;
	}
}

void find_statement_number(char c1[])
{
    if(strcmp(Cancer, "Bone Cancer") == 0)
{
        statement_number=1;
}
    if(strcmp(Cancer, "Eye Cancer") == 0)
{
        statement_number=2;
}
    if(strcmp(Cancer, "Breast Cancer") == 0)
{
        statement_number=3;
}
    if(strcmp(Cancer, "Thyroid Cancer") == 0)
{
        statement_number=4;
}
    if(strcmp(Cancer, "Lung Cancer") == 0)
{
        statement_number=5;
}
    if(strcmp(Cancer, "Stomach Cancer") == 0)
{
        statement_number=6;
}
    if(strcmp(Cancer, "Ovarian Cancer") == 0)
{
        statement_number=7;
}
    if(strcmp(Cancer, "Gallbladder Cancer") == 0)
{
        statement_number=8;
}
    if(strcmp(Cancer, "Kidney Cancer") == 0)
{
        statement_number=9;
}
    if(strcmp(Cancer, "Leukemia Cancer") == 0)
{
        statement_number=10;
}
   if(strcmp(Cancer, "Liver Cancer") == 0)
{
        statement_number=11;
}
    if(strcmp(Cancer, "Prostate Cancer") == 0)
{
        statement_number=12;
}

}

void FH_main(char cd[],int size)
{

	front_pointer=1;
	back_pointer=1;

	for (i=1; i< 13;i++)
    {
        strcpy(clausevariablelist[i],"");
    }


	for(i=1; i<2;i++)
    {
        strcpy(condition_variable_list[i],"");
    }


	for(i=1;i<3;i++)
    {
        instantiated_list[i] = 0;
    }

	for (i=1; i<3;i++)
	{
		strcpy(variablelist[i],"");
	}

	strcpy(variablelist[1],"Cancer");
	strcpy(variablelist[2],"Treatment");

	strcpy(clausevariablelist[1], "Cancer");
	strcpy(clausevariablelist[2], "Cancer");
	strcpy(clausevariablelist[3], "Cancer");
	strcpy(clausevariablelist[4], "Cancer");
	strcpy(clausevariablelist[5], "Cancer");
	strcpy(clausevariablelist[6], "Cancer");
	strcpy(clausevariablelist[7], "Cancer");
	strcpy(clausevariablelist[8], "Cancer");
	strcpy(clausevariablelist[9], "Cancer");
	strcpy(clausevariablelist[10], "Cancer");
	strcpy(clausevariablelist[11], "Cancer");
	strcpy(clausevariablelist[12], "Cancer");



	step1:cout<<"";
	      string s1="Cancer";
	      char cc[6];
	      for(int i=0;i<s1.size();i++){
	      c[i]=s1[i];
	      cc[i]=s1[i];
	      }
	      c[7]='\0';

	if(strcmp(c,"Cancer")!=0)
	{
		cout<<"\n";
		goto step1;
	}


	strcpy(condition_variable_list[back_pointer],c);
	back_pointer = back_pointer + 1;

	statement_number =1;

	clause_number = 1;

	f=1;

	step4: search_clause_variable();
	clause_number = 1;

	if (statement_number != 0)
	{
		i =  statement_number;

		strcpy(v,clausevariablelist[i]);

			check_instantiation(cd,size);

			find_statement_number(Cancer);

		s=0;


		switch(statement_number)
		{
		case 1: if(strcmp(Cancer, "Bone Cancer") == 0)
			    s = 1;
		        break;

		case 2: if(strcmp(Cancer, "Eye Cancer") == 0)
			    s = 1;
		        break;

		case 3: if(strcmp(Cancer, "Breast Cancer") == 0)
			    s = 1;
		        break;

		case 4: if(strcmp(Cancer, "Thyroid Cancer") == 0)
			    s = 1;
		        break;

		case 5: if(strcmp(Cancer, "Lung Cancer") == 0)
			    s = 1;
		        break;

		case 6: if(strcmp(Cancer, "Stomach Cancer") == 0)
			    s = 1;
		        break;

		case 7: if(strcmp(Cancer, "Ovarian Cancer") == 0)
			    s = 1;
		        break;

		case 8: if(strcmp(Cancer, "Gallbladder Cancer") == 0)
			    s = 1;
		        break;

		case 9: if(strcmp(Cancer, "Kidney Cancer") == 0)
			    s = 1;
		        break;

		case 10: if(strcmp(Cancer, "Leukemia Cancer") == 0)
			     s = 1;
		         break;

		case 11: if(strcmp(Cancer, "Liver Cancer") == 0)
			     s = 1;
		         break;

		case 12: if(strcmp(Cancer, "Prostate Cancer") == 0)
			     s = 1;
		         break;

		}

		if (s != 1)
		{
			f=statement_number + 1;
			goto step4;
		}

		switch (statement_number)
		{

		case 1:

			strcpy(Cancer,"Bone Cancer");

			strcpy (Treatment, "Limb-sparing surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Limb-sparing surgery"<<" "<<"\n2) Radiation therapy"<<" "<<"\n3) Chemotherapy\n\n";

			instantiate();
			break;

		case 2:

			strcpy(Cancer,"Eye Cancer");

			strcpy (Treatment, "Iridectomy surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Iridectomy surgery"<<" "<<"\n2) Plaque therapy"<<" "<<"\n3) Laser therapy\n\n";

			instantiate();
			break;


		case 3:

			strcpy(Cancer,"Breast Cancer");

            strcpy (Treatment, "Lumpectomy surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Lumpectomy surgery"<<" "<<"\n2) External beam radiation therapy"<<" "<<"\n3) Hormonal therapy\n\n";

			instantiate();
			break;


		case 4:

			strcpy(Cancer,"Thyroid Cancer");

            strcpy (Treatment, "Thyroidectomy surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Thyroidectomy surgery"<<" "<<"\n2) Radio iodine therapy"<<" "<<"\n3) Chemo therapy\n\n";

			instantiate();
			break;


		case 5:

			strcpy(Cancer,"Lung Cancer");

            strcpy (Treatment, "Radio frequency ablation therapy");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Radio frequency ablation therapy"<<" "<<"\n2) Brachy therapy"<<" "<<"\n3) Immuno therapy\n\n";

			instantiate();
			break;


		case 6:

			strcpy(Cancer,"Stomach Cancer");

            strcpy (Treatment, "Anti-angiogenesis therapy");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Endoscopic mucosal resection surgery"<<" "<<"\n2) Anti-angiogenesis therapy"<<" "<<"\n3) Radiation therapy\n\n";

			instantiate();
			break;


		case 7:

			strcpy(Cancer,"Ovarian Cancer");

			strcpy (Treatment, "Adjuvant chemo therapy");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Hysterectomy surgery"<<" "<<"\n2) Adjuvant chemo therapy"<<" "<<"\n3) Targeted therapy\n\n";

			instantiate();
			break;


		case 8:
			strcpy(Cancer,"Gallbladder Cancer");

	        strcpy (Treatment, "Laparoscopic surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Cholesystectomy surgery"<<" "<<"\n2) Laparoscopic surgery"<<" "<<"\n3) Chemo therapy\n\n";

			instantiate();
			break;


		case 9:

			strcpy(Cancer,"Kidney");

			strcpy (Treatment, "Active surveillance surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Radical nephrectomical surgery"<<" "<<"\n2) Active surveillance therapy"<<" "<<"\n3) Kidney transplant therapy\n\n";

			instantiate();
			break;


		case 10:

			strcpy(Cancer,"Leukemia Cancer");

            strcpy (Treatment, "Ablation surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Radical nephrectomical surgery"<<" "<<"\n2) Active surveillance therapy"<<" "<<"\n3) Radio Ablation therapy\n\n";

			instantiate();
			break;


		case 11:

			strcpy(Cancer,"Liver Cancer");

			strcpy (Treatment, "Liver transplant surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Liver transplant Surgery"<<" "<<"\n2) Stereotactic body radiation therapy"<<" "<<"\n3) Biologic Immuno therapy\n\n";

			instantiate();
			break;


		case 12:

			strcpy(Cancer,"Prostate Cancer");

			strcpy (Treatment, "Radical prostatectomy surgery");
			cout<<"The following treatments are recommended for the above diagnosed cancer:-\n";
			cout<<"\n1) Radical prostatectomy surgery"<<" "<<"\n2) Proton therapy"<<" "<<"\n3) Bilateral orchiectomy therapy\n\n";

			instantiate();
			break;
		}
		f = statement_number +1;

	}
}

};




// backward chaining
class Backward
{
private:
    int conCount=26;
    int varCount=25;
    int clauseCount=101;
    string conList[26][2];
    string varList[25][2];
    string clauseList[101];
    stack <int> rn;
    stack <int> cno;
    string cancerT;

public:

    Backward()
    {
        conList[0][0]="";
        conList[1][0]="NeckLump";
        conList[2][0]="NeckLump";
        conList[3][0]="NeckLump";
        conList[4][0]="CancerType";
        conList[5][0]="CancerType";
        conList[6][0]="CancerType";
        conList[7][0]="Jaundice";
        conList[8][0]="Jaundice";
        conList[9][0]="Jaundice";
        conList[10][0]="CancerType";
        conList[11][0]="CancerType";
        conList[12][0]="CancerType";
        conList[13][0]="CancerType";
        conList[14][0]="FrequentUrine";
        conList[15][0]="FrequentUrine";
        conList[16][0]="FrequentUrine";
        conList[17][0]="CancerType";

        conList[18][0]="Nosebleed";
        conList[19][0]="Nosebleed";
        conList[20][0]="Nosebleed";
        conList[21][0]="CancerType";
        conList[22][0]="CancerType";
        conList[23][0]="CancerType";
        conList[24][0]="CancerType";
        conList[25][0]="CancerType";

        for(int y=0; y< conCount; y++)
        {
            conList[y][1]="";
        }

        varList[0][0]="";
        varList[1][0]="BreatheDiff";
        varList[2][0]="NeckSwell";
        varList[3][0]="NeckPain";
        varList[4][0]="BreastSwell";
        varList[5][0]="BreastPain";
        varList[6][0]="NippleRetract";
        varList[7][0]="EyePain";
        varList[8][0]="VisionLoss";
        varList[9][0]="DarkSpot";
        varList[10][0]="AbdomenPain";
        varList[11][0]="WeightLoss";
        varList[12][0]="AbdomenSwell";
        varList[13][0]="BonePain";
        varList[14][0]="BoneSwell";
        varList[15][0]="ChestPain";

        varList[16][0]="BellyLump";
        varList[17][0]="EatDifficulty";
        varList[18][0]="SexPain";

        varList[19][0]="EasyBruise";
        varList[20][0]="RedSpot";
        varList[21][0]="EnlargeLiver";
        varList[22][0]="BloodUrine";
        varList[23][0]="BackPain";
        varList[24][0]="PainUrine";

        for(int h=0; h<varCount; h++)
        {
            varList[h][1]="";
        }

        clauseList[0]="";
        clauseList[1]="BreatheDiff";// neck lump
        clauseList[2]="NeckSwell";
        clauseList[3]="";
        clauseList[4]="";
        clauseList[5]="BreatheDiff";// neck lump
        clauseList[6]="";
        clauseList[7]="";
        clauseList[8]="";
        clauseList[9]="BreatheDiff";// neck lump
        clauseList[10]="NeckSwell";
        clauseList[11]="";
        clauseList[12]="";
        clauseList[13]="NeckLump";// Thyroid cancer
        clauseList[14]="NeckPain";
        clauseList[15]="";
        clauseList[16]="";
        clauseList[17]="BreastSwell";// breast cancer
        clauseList[18]="BreastPain";
        clauseList[19]="NippleRetract";
        clauseList[20]="";
        clauseList[21]="EyePain"; // eye cancer
        clauseList[22]="VisionLoss";
        clauseList[23]="DarkSpot";
        clauseList[24]="";

        clauseList[25]="AbdomenPain";//jaundice
        clauseList[26]="WeightLoss";
        clauseList[27]="";
        clauseList[28]="";
        clauseList[29]="AbdomenPain";// jaundice
        clauseList[30]="";
        clauseList[31]="";
        clauseList[32]="";
        clauseList[33]="AbdomenPain";// jaundice
        clauseList[34]="WeightLoss";
        clauseList[35]="";
        clauseList[36]="";
        clauseList[37]="Jaundice";//stomach cancer
        clauseList[38]="AbdomenSwell";
        clauseList[39]="";
        clauseList[40]="";
        clauseList[41]="WeightLoss";// bone cancer
        clauseList[42]="BonePain";
        clauseList[43]="BoneSwell";
        clauseList[44]="";

        clauseList[45]="NeckLump";// lung cancer
        clauseList[46]="ChestPain";
        clauseList[47]="";
        clauseList[48]="";

        clauseList[49]="Jaundice";// gallbladder cancer
        clauseList[50]="BellyLump";
        clauseList[51]="";
        clauseList[52]="";
        clauseList[53]="AbdomenPain";// Frequent urination
        clauseList[54]="EatDifficulty";
        clauseList[55]="";
        clauseList[56]="";
        clauseList[57]="AbdomenPain";// Frequent urination
        clauseList[58]="";
        clauseList[59]="";
        clauseList[60]="";
        clauseList[61]="AbdomenPain";// Frequent urination
        clauseList[62]="EatDifficulty";
        clauseList[63]="";
        clauseList[64]="";
        clauseList[65]="FrequentUrine";// ovarian cancer
        clauseList[66]="SexPain";
        clauseList[67]="";
        clauseList[68]="";

        clauseList[69]="WeightLoss";// Nosebleed
        clauseList[70]="EasyBruise";
        clauseList[71]="";
        clauseList[72]="";
        clauseList[73]="WeightLoss";// Nosebleed
        clauseList[74]="";
        clauseList[75]="";
        clauseList[76]="";
        clauseList[77]="WeightLoss";// Nosebleed
        clauseList[78]="EasyBruise";
        clauseList[79]="";
        clauseList[80]="";
        clauseList[81]="Nosebleed";// Leukemia cancer
        clauseList[82]="RedSpot";
        clauseList[83]="";
        clauseList[84]="";
        clauseList[85]="Jaundice";// liver cancer
        clauseList[86]="EnlargeLiver";
        clauseList[87]="";
        clauseList[88]="";

        clauseList[89]="WeightLoss";// Kidney cancer
        clauseList[90]="BloodUrine";
        clauseList[91]="BackPain";
        clauseList[92]="";
        clauseList[93]="WeightLoss";// Prostate cancer
        clauseList[94]="BloodUrine";
        clauseList[95]="PainUrine";
        clauseList[96]="";
        clauseList[97]="WeightLoss";// no cancer
        clauseList[98]="BloodUrine";
        clauseList[99]="PainUrine";
        clauseList[100]="";
    }

    // to set the cancer type
    void setCancerType(string cnc)
    {
        cancerT=cnc;
    }

    // to return the cancer type
    string getCancerType()
    {
        return cancerT;
    }

    void printData()
    {
        cout<<"-----CONCLUSION LIST-----"<<endl<<endl;

        for(int i=1; i<conCount; i++ )
        {
            cout<<"Conclusion "<<i<<" "<<conList[i][0]<<endl;
        }

        cout<<endl<<endl;
        cout<<"-----VARIABLE LIST-----"<<endl<<endl;

        for(int j=1; j<varCount; j++ )
        {
            cout<<"Variable "<<j<<" "<<varList[j][0]<<endl;
        }

        cout<<endl<<endl;
        cout<<"-----CLAUSE VARIABLE LIST-----"<<endl<<endl;

        for(int k=1; k<conCount; k++)
        {
            cout<<"Clause "<<k<<endl;

            for(int k1=1; k1<5; k1++)
            {
               int k2= 4*(k - 1) +k1;
               cout<<"Variable "<<k1<<" "<<clauseList[k2]<<endl;
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        cout<<"----THE FOLLOWING TYPES OF CANCERS ARE DETECTED THROUGH THE SYSTEM----"<<endl<<endl;
        cout<<"Bone Cancer"<<endl;      cout<<"Breast Cancer"<<endl;        cout<<"Eye Cancer"<<endl;
        cout<<"Gallbladder Cancer"<<endl;      cout<<"Kidney Cancer"<<endl;        cout<<"Liver Cancer"<<endl;
        cout<<"Leukemia Cancer"<<endl;      cout<<"Lung Cancer"<<endl;        cout<<"Ovarian Cancer"<<endl;
        cout<<"Prostate Cancer"<<endl;      cout<<"Stomach Cancer"<<endl;        cout<<"Thyroid Cancer"<<endl<<endl;

    }

    // to get the position of the variable
    int getVarLoc(string sy)
    {
        for(int i=1; i< varCount; i++)
        {
            if(varList[i][0] ==  sy)
            {
                return i;
            }
        }
        return 0;
    }

    // to get the variable value from the user
    void getVarValue(string sy1)
    {
        int a1 = getVarLoc(sy1);

        switch(a1)
        {
        case 1:
            cout<<"Does the patient have difficulty in breathing? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 2:
            cout<<"Does the patient have swelling in the neck? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 3:
            cout<<"Does the patient have pain in the front of the neck going up to the ears? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 4:
            cout<<"Does the patient have swelling in the breast? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 5:
            cout<<"Does the patient have pain in the breast? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 6:
            cout<<"Does the patient have retracted nipples? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 7:
            cout<<"Does the patient have pain in and around the eye? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 8:
            cout<<"Does the patient have experienced partial or total loss of vision? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 9:
            cout<<"Does the patient have growing dark spot on the Iris? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 10:
            cout<<"Does the patient have pain in the abdomen? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 11:
            cout<<"Did the patient experience unexpected weight loss without dieting? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 12:
            cout<<"Does the patient have swelling or fluid build up in the abdomen? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 13:
            cout<<"Does the patient have pain in the bone? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 14:
            cout<<"Does the patient have swelling in the area of affected bone? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 15:
            cout<<"Does the patient have pain in the chest? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 16:
            cout<<"Does the patient have lumps in the abdomen? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 17:
            cout<<"Does the patient have difficulty in eating? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 18:
            cout<<"Does the patient have pain during sex? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 19:
            cout<<"Did the patient experience easy bruising? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 20:
            cout<<"Does the patient have tiny red spots on his skin? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 21:
            cout<<"Does the patient have an enlarged liver? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 22:
            cout<<"Does the patient have blood in the urine? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 23:
            cout<<"Does the patient have pain in the back? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;

        case 24:
            cout<<"Does the patient have pain during urination? yes/no "<<endl;
            cin>>varList[a1][1];
            cout<<endl;
            break;
        }
    }

    // to get the result of if - then clause
    string getResult(string vvar1, string vvar2, string vvar3, string vvar4, int rlnNo)
    {
        switch(rlnNo)
        {
            case 1: // neck lump
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "yes";
                }
                else
                {
                    return "";
                }
                break;

            case 2: // neck lump
                 if(vvar1=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 3:// neck lump
                 if(vvar1=="yes" && vvar2=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 4:// Thyroid cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Thyroid Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 5: // breast cancer
                if(vvar1=="yes" && vvar2=="yes" && vvar3=="yes")
                {
                    return "Breast Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 6: //eye cancer
                if(vvar1=="yes" && vvar2=="yes" && vvar3=="yes")
                {
                    return "Eye Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 7: // jaundice
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "yes";
                }
                else
                {
                    return "";
                }
                break;

            case 8: // jaundice
                if(vvar1=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 9: // jaundice
                if(vvar1=="yes" && vvar2=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 10: //stomach cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Stomach Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 11: //bone cancer
                if(vvar1=="yes" && vvar2=="yes" && vvar3=="yes")
                {
                    return "Bone Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 12: //lung cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Lung Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 13: //gallbladder cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Gallbladder Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 14: //frequent urination
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "yes";
                }
                else
                {
                    return "";
                }
                break;

            case 15: //frequent urination
                if(vvar1=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 16: //frequent urination
                if(vvar1=="yes" && vvar2=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 17: //ovarian cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Ovarian Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 18: //nosebleed
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "yes";
                }
                else
                {
                    return "";
                }
                break;

            case 19: //nosebleed
                if(vvar1=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 20: // nosebleed
                if(vvar1=="yes" && vvar2=="no")
                {
                    return "no";
                }
                else
                {
                    return "";
                }
                break;

            case 21: // leukemia cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Leukemia Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 22: //liver cancer
                if(vvar1=="yes" && vvar2=="yes")
                {
                    return "Liver Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 23: //kidney cancer
                if(vvar1=="yes" && vvar2=="yes" && vvar3=="yes")
                {
                    return "Kidney Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 24: //prostate cancer
                if(vvar1=="yes" && vvar2=="yes" && vvar3=="yes")
                {
                    return "Prostate Cancer";
                }
                else
                {
                    return "";
                }
                break;

            case 25: // no cancer
                if(vvar1=="no" || vvar2=="no" || vvar3=="no")
                {
                    return "No Cancer";
                }
                else
                {
                    return "";
                }
                break;
        }
    }

    // to get the rule number
    int ruleNoCon(string rc1)
    {
        for(int r=1; r<conCount; r++)
        {
            if(conList[r][0]== rc1 && conList[r][1] == ""  )
            {
                return r;
            }
        }
        return 0;
    }

    // to add the rule number
    void addRuleNum(string rc2)
    {
        int rno1= ruleNoCon(rc2);
        if(rno1 !=0)
        {
            rn.push(rno1);
            cno.push(1);
            instantVariables(rc2);
        }
        /*
        else{
           // cout<<"No Cancer."<<endl;
        }
        */
    }

    string getConclusionValue(string cv)
    {
        for(int c=1; c<conCount; c++ )
        {
            if(conList[c][0] == cv && conList[c][1]!="" && conList[c][1]!="false")
            {
                return conList[c][1];
            }
        }
        return "";
    }

    // to instantiate the variables and generate the result
    void instantVariables(string rc3)
    {
        int rulNum=rn.top();

        string var11="";
        string var2="";
        string var3="";
        string var4="";

        for(int r1=1; r1 <5 ;r1++ )
        {
            int j2= 4*(rulNum - 1)+ r1;
            string cl1= clauseList[j2];

            if(cl1 == "")
            {
                break;
            }
            else
            {
                int var1 = getVarLoc(cl1);
                string cl2;
                if(var1 != 0)
                {
                    cl2= varList[var1][1];

                    if(cl2 == "")
                    {
                        getVarValue(cl1);
                        cl2=varList[var1][1];
                    }
                }
                else
                {
                  cl2 =  getConclusionValue(cl1);
                  if(cl2 == "")
                  {
                      addRuleNum(cl1);
                      return;
                  }
                }

                if(r1 == 1)
                {
                    var11 = cl2;
                }
                else if(r1 == 2)
                {
                    var2=cl2;
                }
                else if(r1 == 3)
                {
                    var3=cl2;
                }
                else
                {
                    var4=cl2;
                }
            }
        }

        if(var11 !="" || var2 != "" || var3 != "" || var4 != "")
        {
            string res;
            res=getResult(var11, var2, var3, var4, rulNum);

            if(res == "")
            {
                conList[rulNum][1]="false";
                rn.pop();
                cno.pop();
                addRuleNum(rc3);
            }
            else
            {
                cout<<rc3<<" - "<<res<<endl;
                conList[rulNum][1]=res;
                setCancerType(res);

                if(rn.size()==1 && cno.size()==1)
                {
                    rn.pop();
                    cno.pop();
                }
                else
                {
                    rn.pop();
                    cno.pop();
                    string conl1;
                    conl1= conList[rn.top()][0];
                    instantVariables(conl1);
                }
            }
        }
    }
};


int main()
{
    string type;
    string conc12;

    cin>>type;
    if(type == "Backward")
    {
        Backward b;
        F_H f1;
        char str[100];
        b.printData();
        cout<<endl;
        cout<<"PLEASE ENTER CONCLUSION-"<<endl;
        cin>>conc12;
        cout<<endl;
        if(conc12!="")
        {
            b.addRuleNum(conc12);
            cout<<endl<<endl;
            string can=b.getCancerType();
            if(conc12 =="CancerType" && can != "No Cancer")
            {
                cout<<"Diagnosed cancer is - "<<b.getCancerType()<<endl<<endl;
                for(int i=0;i<can.size();i++){
                str[i]=can[i];
                }

                str[can.size()]='\0';
                f1.FH_main(str,can.size()+1);

            }
            else if(can == "No Cancer")
            {
                 cout<<"Patient is not diagnosed with any kind of cancer. "<<endl<<endl;
            }
        }
    }
}
