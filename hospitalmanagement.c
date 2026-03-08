#include<stdio.h>
#include<string.h>
struct patient{
	int patientID;
	char firstname[50];
	char lastname[50];
	int age;
	char gender[15];
	char disease[50];
	char doctor_assigned[50];
	char admissionDate[15];
};

struct Doctor{
    int doctorID;
    char firstname[50];
    char lastname[50];
    char specialization[50];
    int experience;
};


struct Appointment{
    int appointmentID;
    int patientID;
    int doctorID;
    char date[15];
};

struct patient patientno[500];
struct Doctor doctor[300];
struct Appointment appoint[500];
int total_patients=0;
int total_doctors=0;
int total_appointments=0;
void hospitalstats()
{
    printf("Total Patients: %d\n",total_patients);
    printf("Total Doctors: %d\n",total_doctors);
    printf("Total Appointments: %d\n",total_appointments);
}
void addpatient()
{
	if (total_patients >= 500) {
        printf("Error: Hospital is at full capacity (500 patients).\n");
        return;
    }
	printf("\n------------Enter the patient details-----------\n");
	printf("Enter the patient ID:\n");
	scanf("%d",&patientno[total_patients].patientID);
	for(int i=0;i<total_patients;i++)
	{
		if(patientno[i].patientID==patientno[total_patients].patientID)
		{
			printf("Patient ID already exits\n");
			return ;
		}
	}
	printf("Enter the first name of patient:\n");
	scanf("%s",patientno[total_patients].firstname);
	printf("Enter the last name of patient:\n");
	scanf("%s",patientno[total_patients].lastname);
	printf("Enter the age of patient:\n");
	scanf("%d",&patientno[total_patients].age);
	printf("Enter the gender of  the patient:\n");
	scanf("%s",patientno[total_patients].gender);
	printf("Enter the disease with  which patient is effected:\n");
	scanf("%s",patientno[total_patients].disease);
	printf("Enter the doctor assigned to patient:\n");
	scanf("%s",patientno[total_patients].doctor_assigned);
	printf("Enter the admission date of patient:\n");
	scanf("%s",patientno[total_patients].admissionDate);
	total_patients++;
	printf("Record added successfully\n");
printf("Returning to Patient menu.........\n");

}

void displayallpatients()
	{	
		for(int i=0;i<total_patients;i++)
		{
			printf("------------Patient Details-----------\n");
			printf("Patient ID:%d\n",patientno[i].patientID);
			printf(" Name of patient:%s\t",patientno[i].firstname);
			printf("%s\n",patientno[i].lastname);
			printf("Age of patient: %d\n",patientno[i].age);
			printf("Gender of patient: %s\n",patientno[i].gender);
			printf("Disease of patient: %s\n",patientno[i].disease);
			printf("Doctor assigned to patient:%s\n",patientno[i].doctor_assigned);
			printf("Admission date of patient:%s\n",patientno[i].admissionDate);
			}
			printf("---------------------------------------\n");
}

void searchpatient()
	{
		int ID,found=0;
		printf("Enter the patient ID of the patient you wish to search:\n");
		scanf("%d",&ID);
		for(int j=0;j<total_patients;j++)
		{
			if(patientno[j].patientID==ID)
			{
			printf("Record found\n");
			printf("------------Patient Details-----------\n");
			printf("Patient ID:%d\n",patientno[j].patientID);
			printf(" Name of patient:%s\t",patientno[j].firstname);
			printf("%s\n",patientno[j].lastname);
			printf("Age of patient: %d\n",patientno[j].age);
			printf("Gender of patient: %s\n",patientno[j].gender);
			printf("Disease of patient: %s\n",patientno[j].disease);
			printf("Doctor assigned to patient:%s\n",patientno[j].doctor_assigned);
			printf("Admission date of patient:%s\n",patientno[j].admissionDate);
			printf("---------------------------------------\n");
			found=1;
			break;

		}}
if(found==0)
	{
		printf("Record not found\n");
	}
		}
void updatepatient()
{
	int id;
	printf("Enter the patient id whose details have to be updated:\n");
	scanf("%d",&id);
	for(int k=0;k<total_patients;k++)
	{
		if(patientno[k].patientID==id)
	{
	int m;
	printf("1.Update patient ID\n2.Update first name\n3.Update last name\n4.Update age\n5.Update gender\n6.Update disease\n7.Update doctor assigned\n8.Update admission date\n");
	printf("Enter your choice:\n");
	scanf("%d",&m);
	if(m==1)
	{
		int patientid;
		printf("Enter the updated patient ID:\n");
		scanf("%d",&patientid);
		patientno[k].patientID=patientid;
		printf("Patient ID updated\n");
	}
	else if(m==2)
	{
		char fstname[50];
		printf("Enter the updated first name:\n");
		scanf("%s",fstname);
		strcpy(patientno[k].firstname,fstname);
		printf("First name of patient updated \n");
	}	
	else if(m==3)
	{
		char lstname[50];
		printf("Enter the updated last name:\n");
		scanf("%s",lstname);
		strcpy(patientno[k].lastname,lstname);
		printf("Last name of patient updated \n");
	}
	else if(m==4)
	{
		int patientage;
		printf("Enter the updated patient age:\n");
		scanf("%d",&patientage);
		patientno[k].age=patientage;
		printf("Age of patient updated\n");
	}
	else if(m==5)
	{
		char patientgender[15];
		printf("Enter the updated gender of patient:\n");
		scanf("%s",patientgender);
		strcpy(patientno[k].gender,patientgender);
		printf("Patient's gender updated\n");
	}	
	else if(m==6)
	{
		char patientdisease[50];
		printf("Enter the disease to which you want to update:n");
		scanf("%s",patientdisease);
		strcpy(patientno[k].disease,patientdisease);
		printf("Disease of patient is updated\n");
	}	
	else if(m==7)
	{
		char doctor[50];
		printf("Enter the updated doctor assigned to patient:\n");
		scanf("%s",doctor);
		strcpy(patientno[k].doctor_assigned,doctor);
		printf("Assigned doctor updated\n");
	}
	else if(m==8)
	{
		char admission[50];
		printf("Enter the date of admission\n");
		scanf("%s",admission);
		strcpy(patientno[k].admissionDate,admission);
		printf("Admission date updated\n");
	}
	else
		printf("Invalid input\n");
}}
}

void deletepatient()
{
		int id,found=0;
		printf("Enter id of details  whose details have to be deleted:\n");
		scanf("%d",&id);
		for(int s=0;s<total_patients;s++)
		{
			if(patientno[s].patientID==id)
			{
				char ch;
				printf("Are you sure you want to delete?(Y/N)");
				scanf(" %c",&ch);
				if(ch=='Y'){
				// Shift all records left after deletion
				for(int v=s;v<total_patients-1;v++)
				{
					patientno[v]=patientno[v+1];
				}	
					total_patients--;
					printf("Record deleted\n");
					found=1;		
					break;
					}
				else
					printf("Record not deleted\n");
					found=1;
					break;			}}
		if(found==0)
	{
		printf("Record not found\n");
	}
printf("\nReturning to Main Menu...\n");
	}

void totalpatients()
{
    printf("Total Patients: %d\n",total_patients);
}

void patientmanagement()
{
	int p;
	do{
	printf("1.Add patient\n2.Display all patient\n3.Search patient by ID\n4.Update Patient\n5.Delete patient\n6.Total patients\n7.Back\n");
	printf("Enter your choice:\n");
	scanf("%d",&p);
	if(p==1)
	{
		addpatient();
	}
	else if(p==2)
	{
		displayallpatients();
	}
	else if(p==3)
	{
		searchpatient();
	}
	else if(p==4)
	{
		updatepatient();
	}
	else if(p==5)
	{
		deletepatient();	
	}
	else if(p==6)
	{
		totalpatients();
	}
	else if(p==7)
	{
		printf("Returning to main menu......\n");
		break;
	}
	else
		printf("Invalid output\n");
	}while(p!=7);
}

void adddoctor()
	{
		printf("-------------Enter doctor details------------\n");
		printf("Enter the doctor ID:\n");
		scanf("%d",&doctor[total_doctors].doctorID);
		for(int i=0;i<total_doctors;i++)
		{
			if(doctor[i].doctorID==doctor[total_doctors].doctorID)
			{
				printf("Doctor ID already exits\n");
				return;
			}
		}

		printf("Enter the first name of doctor:\n");
		scanf("%s",doctor[total_doctors].firstname);
		printf("Enter the last name of doctor:\n");
		scanf("%s",doctor[total_doctors	].lastname);
		printf("Enter the specilization of doctor :\n");
		scanf("%s",doctor[total_doctors].specialization);
		printf("Enter the experience of doctor:\n");
		scanf("%d",&doctor[total_doctors].experience);	
		printf("Record added successfully\n");
		total_doctors++;
}
void displaydoctors()
	{
		for(int y=0;y<total_doctors;y++)
		{
			printf("------------Doctor Details-----------\n");
			printf("Doctor ID:%d\n",doctor[y].doctorID);
			printf("Doctor's Name:%s\t",doctor[y].firstname);
			printf("%s\n",doctor[y].lastname);
			printf("Specialization:%s\n",doctor[y].specialization);
			printf("Experience:%d\n",doctor[y].experience);
			printf("---------------------------------------\n");			

		}
	}

void totaldoctors()
{
    printf("Total Doctors: %d\n",total_doctors);
}
void searchdoctorbyspecialization()
{
	char speci[50];
	int found=0;
	printf("Enter the specialization of doctor:\n");
	scanf("%s",speci);
	for(int r=0;r<total_doctors;r++)
	{
		if(strcmp(doctor[r].specialization,speci)==0)
		{
			printf("Record found\n");
			printf("------------Doctor Details-----------\n");
			printf("Doctor ID:%d\n",doctor[r].doctorID);
			printf("Doctor's Name:%s\t",doctor[r].firstname);
			printf("%s\n",doctor[r].lastname);
			printf("Specialization:%s\n",doctor[r].specialization);
			printf("Experience:%d\n",doctor[r].experience);
			printf("---------------------------------------\n");
			found=1;
			break;	
					
		}
	}
	
if(found==0)
	{
		printf("Record not found\n");
	}
}

void patientsassignedtodoctor()
	{
		char doctorfn[50];
		printf("Enter Doctor name:\n");
		scanf("%s",doctorfn);
		for(int g=0;g<total_patients;g++)
		{
			if(strcmp(patientno[g].doctor_assigned,doctorfn)==0)
			{
				printf("------------Patient Details-----------\n");
				printf("Patient ID:%d\n",patientno[g].patientID);
			printf(" Name of patient:%s\t",patientno[g].firstname);
			printf("%s\n",patientno[g].lastname);
			printf("Age of patient: %d\n",patientno[g].age);
			printf("Gender of patient: %s\n",patientno[g].gender);
			printf("Disease of patient: %s\n",patientno[g].disease);
			printf("Admission date of patient:%s\n",patientno[g].admissionDate);
			}
		}
	}


void  doctormanagement()
{
	int n;
	do{
	printf("1.Add doctor\n2.Display Doctor\n3.Total doctors\n4.Search Doctor by specialization\n5.Patient assigned to a doctor\n6.Return to main menu\n");
	printf("Enter your choice:\n");
	scanf("%d",&n);
	if(n==1)
	{
		adddoctor();
	}
	else if(n==2)
	{
		displaydoctors();
	}
	else if(n==3)
	{
		totaldoctors();
	}
	else if(n==4)
	{
		searchdoctorbyspecialization();
	}
	else if(n==5)
	{
		patientsassignedtodoctor();
	}
	else if(n==6)
	{
		printf("Returning to main menu.....\n");
		break;
	}
	else 
		printf("Invalid input\n");
	}while(n!=6);
}
void bookappointment()
	{


		printf("Enter the appointment details:\n");
		printf("Enter the appointment ID:\n");
		scanf("%d",&appoint[total_appointments].appointmentID);
			for(int i=0;i<total_appointments;i++)
		{
		if(appoint[i].appointmentID==appoint[total_appointments].appointmentID)
		{
			printf("Appointment ID already exits\n");
			return ;
		}
	}

		printf("Enter the patient ID whose appointment has to be booked:\n");
		scanf("%d",&appoint[total_appointments].patientID);

		int found = 0;

		for(int i=0;i<total_patients;i++)
		{
   			 if(patientno[i].patientID == appoint[total_appointments].patientID)
   		 {
       			 found = 1;
        		break;
   		 }
	}

		if(found==0)
		{
   			 printf("Patient ID not found. Appointment cannot be booked.\n");
			 return;
		}

		
				printf("Enter the doctor ID to be appointed:\n");
		scanf("%d",&appoint[total_appointments].doctorID);
		
		int foundDoctor = 0;

for(int i=0;i<total_doctors;i++)
{
    if(doctor[i].doctorID == appoint[total_appointments].doctorID)
    {
        foundDoctor = 1;
        break;
    }
}

if(foundDoctor==0)
{
    printf("Doctor ID not found\n");
    return;
}
		printf("Enter the date of appointment:\n");
		scanf("%s",appoint[total_appointments].date);
		total_appointments++;
		printf("Appointment booked successfully\n");
		}
void displayappointments()
{
		for(int t=0;t<total_appointments;t++)
		{	
			printf("---------Appointment details-----------\n");
			printf("Appointment ID:%d\n",appoint[t].appointmentID);
			printf("Patient ID:%d\n",appoint[t].patientID);
			printf("Doctor ID:%d\n",appoint[t].doctorID);
			printf("Date :%s\n",appoint[t].date);
			printf("--------------------------------------\n");
		}
}
void totalappointments()
{
    printf("Total Appointments: %d\n",total_appointments);
}
void appointmentsystem()
{
	int a;
	do{
	printf("1.Book an appointment\n2.Display appointments\n3.Total Appointments\n4.Back\n");
	printf("Enter a choice\n");
	scanf("%d",&a);
	if(a==1)
	{
		bookappointment();
	}
	else if(a==2)
	{
		displayappointments();
	}
	else if(a==3)
	{
		totalappointments();
	}
	else if(a==4)
	{
		printf("Returning to main menu.......\n");
		break;
	}
	else
		printf("Invalid input\n");
	}while(a!=4);
}
				

int main()
	{
		int choice;
		printf("=========================================\n");
     		printf("      HOSPITAL MANAGEMENT SYSTEM         \n");
                printf("=========================================\n");
		printf("       Developed in C Language           \n");
		printf("Modules: Patients | Doctors | Appointments\n");
		printf("=========================================\n");
		do{
		
		printf("1.Patient Management\n2.Doctor Management\n3.Appointment System\n4.Hospital Statistics\n5.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			patientmanagement();
		}
		else if(choice==2)
		{
			doctormanagement();
		}
		else if(choice==3)
		{
			appointmentsystem();
		}
		else if(choice==4)
		{
			hospitalstats();
		}
		else if(choice==5)
		{
			printf("Exited from program\n");
		}
		else 
			printf("Invalid input\n");
		}while(choice!=5);
return 0;
}