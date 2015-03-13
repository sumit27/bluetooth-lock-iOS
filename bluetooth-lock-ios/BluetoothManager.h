//
//  BluetoothManager.h
//  bluetooth-lock-ios
//
//  Created by Sumit on 28/01/15.
//  Copyright (c) 2015 sumit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface BluetoothManager : NSObject<CBPeripheralManagerDelegate,CBCentralManagerDelegate,CBPeripheralDelegate>{
    CBPeripheralManager *manager;
    CBCentralManager *centmanager;
    CBMutableCharacteristic *characteristic;
    CBMutableCharacteristic *characteristic1;
    CBMutableCharacteristic *characteristic2;
    CBMutableService *servicea;
    NSData *mainData;
    NSString *range;
    
    CBPeripheral *aCperipheral;
}

@end
