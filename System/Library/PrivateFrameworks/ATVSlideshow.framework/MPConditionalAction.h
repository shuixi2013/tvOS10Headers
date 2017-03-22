/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>
#import <libobjc.A.dylib/MPActionSupport.h>

@class NSString, MPAction;

@interface MPConditionalAction : MPAction <MPActionSupport> {

	NSString* _predicate;
	MPAction* _actionIfTrue;
	MPAction* _actionIfFalse;

}

@property (nonatomic,copy) NSString * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (readonly) MPAction * actionIfTrue;                 //@synthesize actionIfTrue=_actionIfTrue - In the implementation block
@property (readonly) MPAction * actionIfFalse;                //@synthesize actionIfFalse=_actionIfFalse - In the implementation block
+(id)conditionalAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(void)configureTarget;
-(void)setAction:(id)arg1 forCondition:(BOOL)arg2 ;
-(MPAction *)actionIfTrue;
-(MPAction *)actionIfFalse;
-(void)configureActions;
@end
