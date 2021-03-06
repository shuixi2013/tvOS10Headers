/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying> {

	NSDate* _date;
	BOOL _wasCloudRestore;
	NSString* _deviceBuildVersion;
	NSString* _backupBuildVersion;

}

@property (readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) BOOL wasCloudRestore;                       //@synthesize wasCloudRestore=_wasCloudRestore - In the implementation block
@property (readonly) NSString * deviceBuildVersion;              //@synthesize deviceBuildVersion=_deviceBuildVersion - In the implementation block
@property (readonly) NSString * backupBuildVersion;              //@synthesize backupBuildVersion=_backupBuildVersion - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setWasCloudRestore:(BOOL)arg1 ;
-(void)setDeviceBuildVersion:(NSString *)arg1 ;
-(void)setBackupBuildVersion:(NSString *)arg1 ;
-(BOOL)wasCloudRestore;
-(NSString *)deviceBuildVersion;
-(NSString *)backupBuildVersion;
@end

