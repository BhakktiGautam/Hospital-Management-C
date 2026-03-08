# 🏥 Hospital Management System (C)

A **console-based Hospital Management System** developed using the **C programming language**.
This project simulates a simple hospital database where users can manage **patients, doctors, and appointments** through an interactive menu-driven interface.

The system demonstrates the use of **structures, arrays, functions, and basic data validation** in C programming.

---

# 📌 Features

### 👨‍⚕️ Patient Management

* Add new patient records
* Display all patients
* Search patient by ID
* Update patient information
* Delete patient records
* View total number of patients

### 🩺 Doctor Management

* Add doctor details
* Display doctor records
* Search doctor by specialization
* View patients assigned to a doctor
* View total number of doctors

### 📅 Appointment System

* Book appointments between patients and doctors
* Validate patient and doctor IDs before booking
* Display all appointments
* View total number of appointments

### 📊 Hospital Statistics

* Total Patients
* Total Doctors
* Total Appointments

---

# 🧠 Concepts Used

This project demonstrates important **C programming concepts**:

* Structures (`struct`)
* Arrays of structures
* Functions
* Menu-driven programs
* Searching algorithms
* Data validation
* String handling (`string.h`)
* Record management

---

# 🏗 Project Structure

The system is divided into **three main modules**:

```
Hospital Management System
│
├── Patient Management
│   ├── Add Patient
│   ├── Display Patients
│   ├── Search Patient
│   ├── Update Patient
│   └── Delete Patient
│
├── Doctor Management
│   ├── Add Doctor
│   ├── Display Doctors
│   ├── Search by Specialization
│   └── Patients Assigned to Doctor
│
└── Appointment System
    ├── Book Appointment
    ├── Display Appointments
    └── Appointment Statistics
```

---

# 💻 How to Run the Program

### 1️⃣ Compile the program

```bash
gcc hospital_management.c -o hospital
```

### 2️⃣ Run the program

```bash
./hospital
```

On Windows:

```bash
hospital.exe
```

---

# 📷 Example Menu

```
=========================================
      HOSPITAL MANAGEMENT SYSTEM
=========================================
Modules: Patients | Doctors | Appointments
=========================================

1. Patient Management
2. Doctor Management
3. Appointment System
4. Hospital Statistics
5. Exit
```

---

# 🧪 Sample Test Case

Example workflow:

```
Add Doctor → ID: 201
Add Patient → ID: 101
Assign Doctor to Patient
Book Appointment
View Appointment Records
Check Hospital Statistics
```

Expected Output:

```
Appointment booked successfully
Total Patients: 1
Total Doctors: 1
Total Appointments: 1
```

---

# ⚠️ Limitations

* Data is stored **only in memory**
* No **file handling or database storage**
* Data will be lost when the program closes

Future improvements could include:

* File handling
* Database integration
* GUI interface

---

# 🚀 Future Improvements

Possible upgrades for the system:

* File handling for permanent data storage
* Sorting patients or doctors
* Billing system
* Patient discharge system
* Doctor availability tracking
* Graphical User Interface (GUI)

---

# 👩‍💻 Author

Developed by **Bhakkti Gautam**

---

# 📜 License

This project is open-source and available for learning and educational purposes.
