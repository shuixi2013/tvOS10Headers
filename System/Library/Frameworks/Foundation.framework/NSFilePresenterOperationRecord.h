/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {

	NSString* operationDescription;
	long long state;
	id reactor;

}

@property (readonly) NSString * operationDescription; 
@property (readonly) long long state; 
@property (assign) id reactor; 
+(id)operationRecordWithDescription:(id)arg1 ;
-(void)setReactor:(id)arg1 ;
-(void)didBegin;
-(void)willEnd;
-(id)reactor;
-(NSString *)operationDescription;
-(id)_reactorQueue;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)didEnd;
@end

