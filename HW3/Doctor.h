//
//  Doctor.h
//  HW3
//
//  Created by User on 14.03.2024.
//

#ifndef Doctor_h
#define Doctor_h


#endif /* Doctor_h */
#import <Foundation/Foundation.h>

@class Doctor;

@protocol DoctorDelegate <NSObject>
- (void)doctor:(Doctor *)doctor prescribeMedicationToPatient:(NSString *)medication;
@end

@interface Doctor : NSObject

@property (nonatomic, weak) id<DoctorDelegate> delegate;

- (void)prescribeMedication:(NSString *)medication;

@end
