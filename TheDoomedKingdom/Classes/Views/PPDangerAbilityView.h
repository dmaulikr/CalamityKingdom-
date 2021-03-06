//
//  PPDangerAbilityView.h
//  TheDoomedKingdom
//
//  Created by Pavel Stoma on 1/31/16.
//  Copyright © 2016 PP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PPAbility.h"
//#import "PaperView.h"
#import "SSPieProgressView.h"

@interface PPDangerAbilityView : UIView

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *abilityTypeImageView;

@property (nonatomic, weak) IBOutlet UILabel *spentValueLabel;
@property (nonatomic, weak) IBOutlet UILabel *spentTimeLabel;
@property (nonatomic, weak) IBOutlet SSPieProgressView *timeProgress;

@property (nonatomic, strong) PPAbility *ability;

@property (nonatomic, assign) BOOL enabled;

@end
