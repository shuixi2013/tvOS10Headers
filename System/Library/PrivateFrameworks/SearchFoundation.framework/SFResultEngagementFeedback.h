/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFResultFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying> {

	BOOL _actionEngaged;
	unsigned long long _triggerEvent;
	unsigned long long _destination;
	unsigned long long _actionTarget;

}

@property (nonatomic,readonly) BOOL actionEngaged;                         //@synthesize actionEngaged=_actionEngaged - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) unsigned long long destination;               //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long actionTarget;              //@synthesize actionTarget=_actionTarget - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)destination;
-(void)setDestination:(unsigned long long)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setActionTarget:(unsigned long long)arg1 ;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(unsigned long long)actionTarget;
-(id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 ;
-(id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4 ;
-(id)initWithResult:(id)arg1 actionEngaged:(BOOL)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4 ;
-(BOOL)actionEngaged;
@end

