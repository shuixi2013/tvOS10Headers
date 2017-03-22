/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {

	NSExpression* _collection;
	NSExpression* _variableExpression;
	NSPredicate* _subpredicate;

}
+(BOOL)supportsSecureCoding;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
-(BOOL)_shouldUseParensWithDescription;
-(id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3 ;
-(id)variableExpression;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicate;
-(id)variable;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)collection;
@end

