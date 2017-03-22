/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, DKMutableResult;


@protocol DKDiagnostic <NSObject>
@property (nonatomic,readonly) NSDictionary * predicates; 
@property (nonatomic,readonly) NSDictionary * specifications; 
@property (nonatomic,readonly) NSDictionary * parameters; 
@property (nonatomic,retain) DKMutableResult * result; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@optional
-(void)cancel;
-(void)teardown;

@required
-(void)start;
-(BOOL)isCancelled;
-(NSDictionary *)parameters;
-(DKMutableResult *)result;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1;
-(NSDictionary *)predicates;
-(void)setResult:(id)arg1;
-(void)setupWithContext:(id)arg1;
-(NSDictionary *)specifications;

@end

