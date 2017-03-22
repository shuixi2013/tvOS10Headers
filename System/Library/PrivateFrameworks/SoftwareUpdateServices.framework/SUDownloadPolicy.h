/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SUDescriptor;


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@required
-(void)setDescriptor:(id)arg1;
-(SUDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1;
-(BOOL)isDownloadable;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isSamePolicy:(id)arg1;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2;

@end

