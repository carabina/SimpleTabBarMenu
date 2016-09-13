//
//  TabBarView.h
//  TQIExtranet
//
//  Created by TQI on 24/08/16.
//  Copyright © 2016 TQI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"



@interface TabBarView : UIView <UITabBarDelegate>
@property (nonatomic, strong) UIImageView *imageView;
+ (instancetype)sharedInstance;
@end
