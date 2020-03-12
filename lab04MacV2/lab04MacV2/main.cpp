//
//  main.cpp
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//

#include <iostream>
#include "employee.h"
#include "productionWorker.h"

using namespace std;

int main() {
    
    employee em;
    productionWorker workerOne;
    
    
    
    em.setEmployeeName("Juan");
    em.setEmployeeNumber(134);
    em.setHiredDate("10/15/00");
    
    workerOne.setEmployeeName("Justin");
    workerOne.setEmployeeNumber(123);
    workerOne.setHiredDate("03/15/2000");
    workerOne.setRate(13.5);
    workerOne.setShift(1);
    
    workerOne.displayEmployeeInfo();
    
    em.displayEmployeeInfo();

  
    
    
    
    
    
    
   
    return 0;
}

