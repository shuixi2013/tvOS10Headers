//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASTSession, ASTTestResult, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol ASTSessionDelegate <NSObject>
- (void)session:(ASTSession *)arg1 didEndWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 queryPropertiesFilteredByComponents:(NSArray *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)session:(ASTSession *)arg1 queryAvailableTestsWithCompletionHandler:(void (^)(NSArray *))arg2;
- (void)session:(ASTSession *)arg1 cancelTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 startTest:(NSNumber *)arg2 parameters:(NSDictionary *)arg3 testResult:(ASTTestResult *)arg4;

@optional
- (void)sessionDidResume:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 didPauseWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteProgress:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteImage:(NSData *)arg2;
- (void)sessionDidCancelSuite:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 didCompleteTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didStartTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didUpdateSettings:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)session:(ASTSession *)arg1 didResumeSendingResultForTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didPauseSendingResultForTest:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)session:(ASTSession *)arg1 didFinishSendingResultForTest:(NSNumber *)arg2;
@end
