/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {

	AVItemAccessLogInternal* _playerItemAccessLog;

}

@property (nonatomic,readonly) NSArray * events; 
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLogArray:(id)arg1 ;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(NSArray *)events;
@end

