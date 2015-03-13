//
//  AppDelegate.h
//  bluetooth-lock-ios
//
//  Created by Sumit on 28/01/15.
//  Copyright (c) 2015 sumit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BluetoothManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) BluetoothManager *bluetoothManager;


@end

