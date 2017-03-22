/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNMultiValueDiff : NSObject {

	NSArray* _updates;

}

@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
+(id)emptyDiff;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(NSArray *)updates;
-(id)initWithUpdates:(id)arg1 ;
-(id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 propertyDescription:(id)arg2 error:(id*)arg3 ;
@end

