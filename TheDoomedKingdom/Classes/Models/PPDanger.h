//
//  PPDanger.h
//  TheDoomedKingdom
//
//  Created by Pavel Stoma on 1/30/16.
//  Copyright © 2016 PP. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PPAbility;
@class PPCity;
@class PPDangerResult;

typedef NS_ENUM(NSInteger, PPDangerLevel) {
    PPDangerLevelKolhoz = 1,
    PPDangerLevelKing = 2,
    PPDangerLevelImperator = 3,
    PPDangerLevelMax,
};

typedef NS_ENUM(NSInteger, PPDangerType) {
    PPDangerTypeDisaster = 1,
    PPDangerTypeMonsters = 2,
    PPDangerTypePlague,
    PPDangerTypeCurse,
    PPDangerTypeMax,
};

@interface PPDanger : NSObject

@property (nonatomic) NSString *dangerId;
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *dangerDescription;

@property (nonatomic, assign) PPDangerLevel dangerLevel;
@property (nonatomic, assign) PPDangerType dangerType;

@property (nonatomic) PPDangerResult *result;

@property (nonatomic, readonly) NSArray *abilitiesToRemove;

@property (nonatomic, assign) NSInteger timeToAppear;
@property (nonatomic, assign) NSInteger maxTimeForDanger;

@property (nonatomic) PPCity *affectedCity;
@property (nonatomic, assign) BOOL removed;
@property (nonatomic, assign) BOOL inProgress;

@property (nonatomic) PPCity *predefinedCity;
@property (nonatomic, assign) NSInteger predefinedTime;

- (NSInteger)dangerDuration;
- (NSInteger)dangerLeftDuration;
- (NSString *)dangelLevelName;
- (NSString *)dangelLevelIcon;
- (NSString *)dangelTypeName;
- (NSString *)dangerTypeIcon;


@end
