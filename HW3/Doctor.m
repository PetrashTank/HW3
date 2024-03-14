//
//  Doctor.m
//  HW3
//
//  Created by User on 14.03.2024.
//

#import <Foundation/Foundation.h>
#import "Doctor.h"

@implementation Doctor

- (void)prescribeMedication:(NSString *)medication {
    [self.delegate doctor:self prescribeMedicationToPatient:medication];
}

@end
