//
//  AHDirectionsObject.h
//  Nite Owl
//
//  Created by Joe Barbour on 17/05/2015.
//  Copyright (c) 2015 NorthernSpark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface AHDirectionsObject : NSObject {
    NSUserDefaults *userData;
    NSMutableArray *applications;

}

@property (nonatomic, strong) NSString *locationName;

-(void)directionsHandle:(CLLocation *)location type:(NSString *)type;

-(NSArray *)directionsApplications;

@end
