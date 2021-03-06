/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitVendorInformation, NSString;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _addOperation;
	BOOL _addViaWAC;
	AWDHomeKitVendorInformation* _vendorInfo;
	long long _linkType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorInfo;               //@synthesize vendorInfo=_vendorInfo - In the implementation block
@property (assign,nonatomic) long long linkType;                                     //@synthesize linkType=_linkType - In the implementation block
@property (getter=isAddOperation,nonatomic,readonly) BOOL addOperation;              //@synthesize addOperation=_addOperation - In the implementation block
@property (assign,getter=isAddViaWAC,nonatomic) BOOL addViaWAC;                      //@synthesize addViaWAC=_addViaWAC - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)pairingAccessory:(id)arg1 ;
+(id)removingAccessory:(id)arg1 hapAccessory:(id)arg2 ;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(AWDHomeKitVendorInformation *)vendorInfo;
-(void)pairedToServer:(id)arg1 ;
-(void)pairedAccessory:(id)arg1 ;
-(id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 isAddOperation:(BOOL)arg4 ;
-(BOOL)isAddOperation;
-(void)setAddViaWAC:(BOOL)arg1 ;
-(void)setVendorInfo:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)isAddViaWAC;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

