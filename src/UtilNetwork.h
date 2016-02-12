//
//  UtilNetwork.h
//  
//
//  Created by lerlerblur on 2016/2/12.
//
//

#ifndef UtilNetwork_h
#define UtilNetwork_h

#import "MobileWiFi/MobileWiFi.h"

@interface UtilNetwork : NSObject {
    WiFiNetworkRef _network;
    NSString       *_SSID;
    NSString       *_encryptionModel;
    NSString       *_BSSID;
    NSString       *_username;
    NSString       *_password;
    NSString       *_vendor;
    NSDictionary   *_record;
    float          _RSSI;
    int            _channel;
    int            _APMode;
    int 		   _bars;
    BOOL           _isAppleHotspot;
    BOOL           _isCurrentNetwork;
    BOOL           _isAdHoc;
    BOOL           _isHidden;
    BOOL           _isAssociating;
    BOOL           _requiresUsername;
    BOOL           _requiresPassword;
}

@property(nonatomic, copy) NSString *SSID;
@property(nonatomic, copy) NSString *encryptionModel;
@property(nonatomic, copy) NSString *BSSID;
@property(nonatomic, copy) NSString *password;
@property(nonatomic, copy) NSString *username;
@property(nonatomic, copy) NSString *vendor;
@property(nonatomic, copy) NSDictionary *record;
@property(nonatomic, assign) float RSSI;
@property(nonatomic, assign) int channel;
@property(nonatomic, assign) int APMode;
@property(nonatomic, assign) int bars;
@property(nonatomic, assign) BOOL isAppleHotspot;
@property(nonatomic, assign) BOOL isCurrentNetwork;
@property(nonatomic, assign) BOOL isAdHoc;
@property(nonatomic, assign) BOOL isHidden;
@property(nonatomic, assign) BOOL isAssociating;
@property(nonatomic, assign) BOOL requiresPassword;
@property(nonatomic, assign) BOOL requiresUsername;
@property(nonatomic, assign, readonly) WiFiNetworkRef _networkRef;

- (id)initWithNetwork:(WiFiNetworkRef)network;
- (void)populateData;


@end
#endif /* UtilNetwork_h */
