/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKit/CloudKit-Structs.h>
@class CKObjCType, NSString, NSMethodSignature;

@interface CKObjCProperty : NSObject {

	Class _classHandle;
	CKObjCType* _type;
	NSString* _name;
	unsigned long long _flags;
	SEL _getterSelector;
	NSString* _getterSelectorName;
	NSMethodSignature* _getterMethodSignature;
	SEL _setterSelector;
	NSString* _setterSelectorName;
	NSMethodSignature* _setterMethodSignature;
	NSString* _instanceVariableName;

}

@property (nonatomic,readonly) Class classHandle;                                      //@synthesize classHandle=_classHandle - In the implementation block
@property (nonatomic,readonly) CKObjCType * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) SEL getterSelector;                                     //@synthesize getterSelector=_getterSelector - In the implementation block
@property (nonatomic,readonly) NSString * getterSelectorName;                          //@synthesize getterSelectorName=_getterSelectorName - In the implementation block
@property (nonatomic,readonly) NSMethodSignature * getterMethodSignature;              //@synthesize getterMethodSignature=_getterMethodSignature - In the implementation block
@property (nonatomic,readonly) SEL setterSelector;                                     //@synthesize setterSelector=_setterSelector - In the implementation block
@property (nonatomic,readonly) NSString * setterSelectorName;                          //@synthesize setterSelectorName=_setterSelectorName - In the implementation block
@property (nonatomic,readonly) NSMethodSignature * setterMethodSignature;              //@synthesize setterMethodSignature=_setterMethodSignature - In the implementation block
@property (nonatomic,readonly) NSString * instanceVariableName;                        //@synthesize instanceVariableName=_instanceVariableName - In the implementation block
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(CKObjCType *)type;
-(id)getFromObject:(id)arg1 ;
-(id)initWithClass:(Class)arg1 property:(objc_propertyRef)arg2 ;
-(long long)compareToProperty:(id)arg1 ;
-(void)setValue:(id)arg1 onObject:(id)arg2 ;
-(Class)classHandle;
-(SEL)getterSelector;
-(NSString *)getterSelectorName;
-(NSMethodSignature *)getterMethodSignature;
-(SEL)setterSelector;
-(NSString *)setterSelectorName;
-(NSMethodSignature *)setterMethodSignature;
-(NSString *)instanceVariableName;
-(unsigned long long)flags;
@end

