/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFileCopierDelegate.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)compressPath:(id)arg1 toPath:(id)arg2 ;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
@end
