/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSString, NSKeyValueProperty;

@interface NSKeyValueComputedProperty : NSKeyValueProperty {

	NSString* _operationName;
	NSString* _operationArgumentKeyPath;
	NSKeyValueProperty* _operationArgumentProperty;

}
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS32*)arg5 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS32)arg5 ;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

