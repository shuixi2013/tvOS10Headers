/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathExpression.h>

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression> {

	/*^block*/id _evaluatingBlock;

}

@property (nonatomic,copy) id evaluatingBlock;              //@synthesize evaluatingBlock=_evaluatingBlock - In the implementation block
-(id)evaluatingBlock;
-(id)evaluate:(id)arg1 :(long long)arg2 :(id)arg3 ;
-(id)initWithAppContext:(id)arg1 evaluatingBlock:(/*^block*/id)arg2 ;
-(void)setEvaluatingBlock:(id)arg1 ;
@end

