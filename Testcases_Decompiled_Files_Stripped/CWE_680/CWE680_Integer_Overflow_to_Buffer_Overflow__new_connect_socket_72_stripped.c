
void FUN_001038a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103d3a(param_1);
  FUN_00103d9f(*param_1,uVar1);
  return;
}




void FUN_00103936(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103dc9(param_2);
  uVar2 = FUN_00103dc9(param_1);
  FUN_00103e15(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104a22(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00104d28(void)

{
  return 0;
}




void FUN_00104df6(void)

{
  return;
}




void FUN_00104d72(void)

{
  return;
}




undefined8 FUN_00102a8c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104de0(void)

{
  return;
}




void FUN_00104dd5(void)

{
  return;
}




void FUN_0010454b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104642(&local_10);
  FUN_00103e4a(uVar1);
  return;
}




void FUN_00104da9(void)

{
  return;
}




void * FUN_001045df(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00104379(undefined8 param_1)

{
  FUN_001043c6(param_1);
  return;
}




void FUN_00103d27(void)

{
  return;
}




void FUN_00104e0c(void)

{
  return;
}




undefined8 FUN_001043de(undefined8 param_1)

{
  return param_1;
}




void FUN_00102eae(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001037af(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103c70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103b54(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong FUN_00103a64(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00103f4c(param_1);
  lVar2 = FUN_001035ca(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001035ca(local_40);
  local_30 = FUN_001035ca(local_40);
  plVar3 = (long *)FUN_00103f72(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001035ca(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103f4c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103f4c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001043f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00103eca(param_3);
  uVar2 = FUN_001044f5(local_28);
  uVar3 = FUN_001044f5(local_20);
  uVar1 = FUN_00104516(uVar3,uVar2,uVar1);
  FUN_0010413e(&local_30,uVar1);
  return;
}




undefined8 FUN_00103564(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102f28(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00103eca(param_3);
  uVar2 = FUN_00103eca(local_28);
  uVar3 = FUN_00103eca(local_20);
  uVar1 = FUN_00104109(uVar3,uVar2,uVar1);
  FUN_0010413e(&local_30,uVar1);
  return;
}




void FUN_00104a4a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001044f5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010382e(&local_10);
  return *puVar1;
}




void FUN_00104154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010432b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103eca(undefined8 param_1)

{
  return param_1;
}




void FUN_001046ef(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_00104822(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_0010489e(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




undefined8 FUN_0010382e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ba0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ee8(param_1);
  FUN_00102efa(*param_1,param_1[1],uVar1);
  FUN_00102b4e(param_1);
  return;
}




void FUN_00103b8b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103fcf(param_2);
  uVar2 = FUN_00103fcf(param_1);
  FUN_00103e15(uVar2,uVar1,param_3,param_4);
  return;
}




ulong * FUN_00103f72(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104dbf(void)

{
  return;
}




void FUN_00105012(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001038d4(undefined8 param_1)

{
  FUN_00103d3a(param_1);
  return;
}




undefined8 FUN_00103b54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103fa1(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010376a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103cca(param_1,param_2,param_3);
  return;
}




void FUN_00104947(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001050f0(void)

{
  return;
}




void FUN_00103840(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103d50(param_3);
  uVar2 = FUN_00103d3a(param_1);
  FUN_00103d62(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010432b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103eca(param_1);
  uVar1 = FUN_001044ae(uVar1,param_2,param_3);
  FUN_0010413e(&local_10,uVar1);
  return;
}




undefined8 FUN_00102a27(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104846("Calling good()...");
  FUN_00102a17();
  FUN_00104846("Finished good()");
  FUN_00104846("Calling bad()...");
  FUN_00102609();
  FUN_00104846("Finished bad()");
  return 0;
}




long FUN_00104822(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00104db4(void)

{
  return;
}




undefined8 FUN_00103be3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c10(param_1,param_2);
  return param_1;
}




void FUN_00104dca(void)

{
  return;
}




void FUN_00102efa(undefined8 param_1,undefined8 param_2)

{
  FUN_001037e1(param_1,param_2);
  return;
}




void FUN_00103a2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103f16(param_1,param_2,param_3);
  return;
}




void FUN_00104109(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042b5(param_1,param_2,param_3);
  return;
}




void FUN_00104d5c(void)

{
  return;
}




undefined8 FUN_001043c6(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00104d67(void)

{
  return;
}




void FUN_0010402f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104234(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_0010398e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103e4a(param_2);
  uVar2 = FUN_00103e4a(param_1);
  FUN_00103e5c(uVar2,uVar1,param_3);
  return;
}




void FUN_00102ff8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00103a64(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103518(local_80);
      local_60 = FUN_001038f2(&local_88,&local_78);
      local_70 = FUN_00103b54(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102ee8(local_80);
                    /* try { // try from 00103302 to 0010338d has its CatchHandler @ 00103445 */
      FUN_00103a2f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102ee8(local_80);
      puVar2 = (undefined8 *)FUN_00102f4a(&local_88);
      local_70 = FUN_00103b8b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00102ee8(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102f4a(&local_88);
      local_70 = FUN_00103b8b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102ee8(local_80);
      FUN_00102efa(*local_80,local_80[1],uVar1);
      FUN_00102eae(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103840(local_38,param_1,param_4);
                    /* try { // try from 00103082 to 00103255 has its CatchHandler @ 00103427 */
      local_50 = FUN_001038d4(local_38);
      local_78 = FUN_00102be8(local_80);
      local_48 = FUN_001038f2(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102ee8(local_80);
        FUN_00103936(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00102f4a(&local_88);
        FUN_0010398e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102f4a(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102f4a(&local_88);
        FUN_001039de(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00102ee8(local_80);
        lVar4 = FUN_00103a2f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102ee8(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102f4a(&local_88);
        FUN_00103936(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102f4a(&local_88);
        FUN_001039de(*puVar2,local_40,local_50);
      }
      FUN_001038a0(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010413e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104571(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00103eca(param_3);
  uVar2 = FUN_00103eca(local_28);
  uVar3 = FUN_00103eca(local_20);
  uVar1 = FUN_00104657(uVar3,uVar2,uVar1);
  FUN_0010413e(&local_30,uVar1);
  return;
}




void FUN_00103f16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104154(param_1,param_2,param_3);
  return;
}




void FUN_00104a75(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104d7d(void)

{
  return;
}




undefined8 FUN_00102be8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f28(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104284(param_1,param_2,param_3);
  return;
}




void FUN_00102609(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ae2(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001026bc to 00102823 has its CatchHandler @ 0010286f */
    iVar1 = connect(local_98,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_98,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_9c = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  local_90 = FUN_00102be8(local_88);
  FUN_00102c38(local_68,&local_90);
  FUN_00102c66(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102be8(local_88);
  FUN_00102c38(local_68,&local_90);
  FUN_00102c66(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102be8(local_88);
  FUN_00102c38(local_68,&local_90);
  FUN_00102c66(local_88,local_68[0],1,&local_9c);
  FUN_00102d2c(local_68,local_88);
                    /* try { // try from 0010282b to 0010282f has its CatchHandler @ 0010285a */
  FUN_001046ef(local_68);
  FUN_00102ba0(local_68);
  FUN_00102ba0(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103d00(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103d9f(undefined8 param_1,undefined8 param_2)

{
  FUN_001040a2(param_1,param_2);
  return;
}




void FUN_00103edc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00104657(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010468c(param_1,param_2,param_3);
  return;
}




void FUN_0010289c(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ae2(local_58);
  local_64 = 0x14;
  local_60 = FUN_00102be8(local_58);
  FUN_00102c38(local_38,&local_60);
                    /* try { // try from 0010290c to 001029a1 has its CatchHandler @ 001029ed */
  FUN_00102c66(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102be8(local_58);
  FUN_00102c38(local_38,&local_60);
  FUN_00102c66(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102be8(local_58);
  FUN_00102c38(local_38,&local_60);
  FUN_00102c66(local_58,local_38[0],1,&local_64);
  FUN_00102d2c(local_38,local_58);
                    /* try { // try from 001029a9 to 001029ad has its CatchHandler @ 001029d8 */
  FUN_00104788(local_38);
  FUN_00102ba0(local_38);
  FUN_00102ba0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104f99(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00103cca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010402f(param_1,param_2,param_3);
  return;
}




void FUN_00104060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00103d50(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102a8c(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102e4c(undefined8 param_1)

{
  FUN_001037a0(param_1);
  return;
}




undefined8 FUN_00102f4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104ad6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00104d37(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102aa2(undefined8 param_1)

{
  FUN_00102b2e(param_1);
  return;
}




undefined8 FUN_00103518(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f28(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103d50(undefined8 param_1)

{
  return param_1;
}




void FUN_00104deb(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




ulong FUN_00104b36(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105031(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103e4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104788(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_00104822(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_0010489e(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




undefined8 FUN_00103712(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010380c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104642(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001040b6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104d93(void)

{
  return;
}




void FUN_0010401c(void)

{
  return;
}




void FUN_00104aa3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010445e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104d19(void)

{
  return 1;
}




undefined8 FUN_00104f76(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103dc9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001040b6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c3a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c10(param_1,param_2);
  FUN_00102e6c(param_1);
  return;
}




long FUN_00103d3a(long param_1)

{
  return param_1 + 8;
}




void FUN_0010491c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00104f1b(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined4 * FUN_001044ae(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_0010486c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103fcf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001040b6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d88(void)

{
  return;
}




long FUN_001035ca(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_001037af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d00(param_1,param_2,param_3);
  return;
}




void FUN_0010489e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104972(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102b02(undefined8 param_1)

{
  FUN_00102e4c(param_1);
  FUN_00102e6c(param_1);
  return;
}




void FUN_00104846(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001036ba(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010380c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103d50(param_3);
  FUN_00104060(param_1,param_2,uVar1);
  return;
}




void * FUN_0010468c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103f4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103642(param_1);
  FUN_00104185(uVar1);
  return;
}




void FUN_00104516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001045df(param_1,param_2,param_3);
  return;
}




void FUN_00102e6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00104e01(void)

{
  return;
}




long FUN_001038f2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102f4a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102f4a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102c66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00102f5c(param_1);
  local_18 = FUN_00102fb3(&local_38,&local_20);
  local_20 = FUN_00103518(local_30);
  uVar1 = FUN_00103564(&local_20,local_18);
  FUN_00102ff8(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103518(local_30);
  FUN_00103564(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001035f1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103be3(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102ac2(undefined8 param_1)

{
  FUN_00102b02(param_1);
  return;
}




void FUN_001041ee(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001043c6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00103e15(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001040d4(param_1,param_2,param_3);
  return;
}




long FUN_00102fb3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010382e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010382e(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_001039de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103eca(param_2);
  uVar2 = FUN_00103eca(param_1);
  FUN_00103edc(uVar2,uVar1,param_3);
  return;
}




void FUN_0010445e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010454b(param_2);
  uVar2 = FUN_0010454b(param_1);
  FUN_00104571(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_00104397(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010499d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001049c8(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103c3a(param_1,param_3);
                    /* try { // try from 0010368e to 00103692 has its CatchHandler @ 00103695 */
  FUN_00103c70(param_1,param_2);
  return;
}




void FUN_00102ae2(undefined8 param_1)

{
  FUN_00102ac2(param_1);
  return;
}




void FUN_00104234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001043de(param_2);
  uVar2 = FUN_001043de(param_1);
  FUN_001043f0(uVar2,uVar1,param_3);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e98)();
  return;
}




void FUN_00104d9e(void)

{
  return;
}




void FUN_00105080(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_001040a2(void)

{
  return;
}




void FUN_00102f28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102550();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00102c38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102f4a(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001037e1(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d27(param_1,param_2);
  return;
}




undefined8 FUN_00102ee8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b2e(undefined8 param_1)

{
  FUN_00102e9e(param_1);
  return;
}




void FUN_00102b4e(long *param_1)

{
  FUN_00102eae(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102aa2(param_1);
  return;
}




long FUN_001042b5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00104e17(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103c10(undefined8 param_1,undefined8 param_2)

{
  FUN_0010401c(param_1,param_2);
  return;
}




undefined8 FUN_00102f5c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010380c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103642(param_2);
  FUN_001035f1(&local_31,uVar1);
  uVar1 = FUN_001035ca(param_2);
                    /* try { // try from 00102d92 to 00102d96 has its CatchHandler @ 00102dff */
  FUN_00103654(param_1,uVar1,&local_31);
  FUN_00102b2e(&local_31);
  uVar2 = FUN_00102ee8(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103712(param_2);
  uVar4 = FUN_001036ba(param_2);
                    /* try { // try from 00102de0 to 00102de4 has its CatchHandler @ 00102e1d */
  uVar1 = FUN_0010376a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00104c3a(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103642(undefined8 param_1)

{
  return param_1;
}




void FUN_001048c6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010380c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00104185(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00104379(param_1);
  puVar1 = (undefined8 *)FUN_00104397(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001048f2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00105050(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103fa1(undefined8 param_1,undefined8 param_2)

{
  FUN_001041ee(param_1,param_2,0);
  return;
}




undefined8 FUN_00104e4e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104e17,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00102e9e(void)

{
  return;
}




void FUN_00102a17(void)

{
  FUN_0010289c();
  return;
}




void FUN_001037a0(void)

{
  return;
}




void FUN_00104d51(void)

{
  return;
}



