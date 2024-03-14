//
//  Patient.h
//  HW3
//
//  Created by User on 14.03.2024.
//

#ifndef Patient_h
#define Patient_h


#endif /* Patient_h */
#import <Foundation/Foundation.h>
#import "Doctor.h"

@interface Patient : NSObject <DoctorDelegate>

- (void)takeMedication:(NSString *)medication;

@end
