//
//  Patient.m
//  HW3
//
//  Created by User on 14.03.2024.
//

#import <Foundation/Foundation.h>
#import "Patient.h"
#import "Doctor.h"

@implementation Patient

- (void)takeMedication:(NSString *)medication {
    NSLog(@"Taking medication: %@", medication);
}

- (void)doctor:(Doctor *)doctor prescribeMedicationToPatient:(NSString *)medication {
    [self takeMedication:medication];
}

@end
