/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidator.h>

@protocol CKObjectValidating;
@interface CKDeclarativePredicateValidator : CKPredicateValidator {

	id<CKObjectValidating> _validator;

}
-(id)init;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
@end

