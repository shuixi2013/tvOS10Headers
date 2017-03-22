/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CNObservableEvent : NSObject

@property (nonatomic,readonly) unsigned long long eventType; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSError * error; 
+(id)eventWithResult:(id)arg1 ;
+(id)completionEvent;
+(id)failureEventWithError:(id)arg1 ;
-(id)value;
-(unsigned long long)eventType;
-(BOOL)hasValue;
-(NSError *)error;
-(void)dematerializeWithObserver:(id)arg1 ;
@end

