/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSKeyedArchiver;

@interface HMDKeyedXPCArchiver : NSObject {

	NSKeyedArchiver* _archiver;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)finishEncoding;
-(void)_configure;
-(NSKeyedArchiver *)archiver;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(id)initForWritingWithMutableData:(id)arg1 message:(id)arg2 ;
@end
