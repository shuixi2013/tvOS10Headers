/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_UTType.h>

@class NSString, NSSet;

@interface _UTConcreteType : _UTType {

	NSString* _identifier;
	NSSet* _pedigree;

}
+(BOOL)supportsSecureCoding;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 ;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(id)parentIdentifiers;
-(BOOL)_isPublic;
-(BOOL)_isAppleInternal;
-(id)_unlocalizedDescription;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_iconURL;
-(id)initWithIdentifier:(id)arg1 pedigree:(id)arg2 ;
-(id)_pedigree;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(BOOL)_isActive;
-(id)version;
-(BOOL)isDynamic;
-(BOOL)conformsToType:(id)arg1 ;
-(id)referenceURL;
@end

