//
//  AirPlayService.h
//  Connect SDK
//
//  Created by Jeremy White on 4/18/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#define kConnectSDKAirPlayServiceId @"AirPlay"

#import <Foundation/Foundation.h>
#import "DeviceService.h"
#import <UIKit/UIKit.h>
#import "AirPlayViewController.h"
#import "MediaPlayer.h"
#import "MediaControl.h"


@interface AirPlayService : DeviceService <MediaPlayer, MediaControl>

@property (nonatomic) UIWindow *secondWindow;
@property (nonatomic) AirPlayViewController *viewController;

@end
