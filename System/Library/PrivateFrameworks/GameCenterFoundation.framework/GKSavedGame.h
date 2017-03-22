/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL;

@interface GKSavedGame : NSObject <NSCopying> {

	NSString* _name;
	NSString* _deviceName;
	NSDate* _modificationDate;
	NSURL* _fileURL;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)fileURL;
-(NSString *)deviceName;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
@end

