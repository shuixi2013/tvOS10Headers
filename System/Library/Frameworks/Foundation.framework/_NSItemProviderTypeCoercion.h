/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSItemProviderTypeCoercion : NSObject {

	id _value;
	Class _targetClass;

}

@property (nonatomic,retain) id value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) Class targetClass;              //@synthesize targetClass=_targetClass - In the implementation block
+(id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2 ;
+(SEL)selectorForCoercionFromValue:(id)arg1 toClass:(Class)arg2 ;
+(id)coercionClassStringFromClass:(Class)arg1 ;
-(BOOL)shouldCoerceForCoding;
-(id)coerceValueAndReturnError:(id*)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

