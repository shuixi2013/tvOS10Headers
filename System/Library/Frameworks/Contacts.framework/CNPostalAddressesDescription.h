/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNCompoundMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isNonnull;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(id)CNValueForContact:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2 ;
-(Class)labeledValueClass;
-(/*^block*/id)dictionaryTransform;
-(/*^block*/id)fromDictionaryTransform;
-(id)summarizationKeys;
-(int)abPropertyID:(int*)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
@end

