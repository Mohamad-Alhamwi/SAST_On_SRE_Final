
void FUN_001030a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010324e(param_2);
  uVar2 = FUN_0010324e(param_1);
  FUN_00103260(uVar2,uVar1,param_3);
  return;
}




undefined8 * FUN_0010331e(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103ccc(void)

{
  return;
}




void FUN_00103563(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_60;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010373a(param_1,2);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  sVar2 = strlen(__s);
  for (local_60 = 0; local_60 < sVar2; local_60 = local_60 + 1) {
    local_48[local_60] = __s[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_0010375e(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033bf(param_2);
  uVar2 = FUN_001033bf(param_1);
  FUN_001033e5(uVar2,uVar1,param_3);
  return;
}




void FUN_00102ada(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029be(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102e0f(undefined8 param_1,undefined8 param_2)

{
  FUN_0010305e(param_1,param_2,0);
  return;
}




undefined8 FUN_00102bba(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103a4e(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b96(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024ac(param_2);
  FUN_0010245b(&local_31,uVar1);
  uVar1 = FUN_00102434(param_2);
                    /* try { // try from 00101bfc to 00101c00 has its CatchHandler @ 00101c69 */
  FUN_001024be(param_1,uVar1,&local_31);
  FUN_00101998(&local_31);
  uVar2 = FUN_00101d52(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010257c(param_2);
  uVar4 = FUN_00102524(param_2);
                    /* try { // try from 00101c4a to 00101c4e has its CatchHandler @ 00101c87 */
  uVar1 = FUN_001025d4(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d08(void)

{
  return;
}




void FUN_00102dba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024ac(param_1);
  FUN_00102ff5(uVar1);
  return;
}




void FUN_00101a0a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d52(param_1);
  FUN_00101d64(*param_1,param_1[1],uVar1);
  FUN_001019b8(param_1);
  return;
}




long FUN_00101e1d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102698(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102698(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fc4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cb4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102e8a(void)

{
  return;
}




void FUN_001033e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d34(param_3);
  uVar2 = FUN_00102d34(local_28);
  uVar3 = FUN_00102d34(local_20);
  uVar1 = FUN_001034cb(uVar3,uVar2,uVar1);
  FUN_00102fae(&local_30,uVar1);
  return;
}




void FUN_001037b6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_001028ce(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102dba(param_1);
  lVar2 = FUN_00102434(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102434(local_40);
  local_30 = FUN_00102434(local_40);
  plVar3 = (long *)FUN_00102de0(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102434(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102dba(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102dba(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001023ce(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d92(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103369(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102698(&local_10);
  return *puVar1;
}




undefined8 FUN_00101891(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010375e("Calling good()...");
  FUN_00101881();
  FUN_0010375e("Finished good()");
  FUN_0010375e("Calling bad()...");
  FUN_00101549();
  FUN_0010375e("Finished bad()");
  return 0;
}




void FUN_001027a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c33(param_2);
  uVar2 = FUN_00102c33(param_1);
  FUN_00102c7f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010270a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ba4(param_1);
  FUN_00102c09(*param_1,uVar1);
  return;
}




undefined8 FUN_00101db4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010393a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102d34(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c7f(void)

{
  return;
}




void FUN_00103ce2(void)

{
  return;
}




undefined8 FUN_0010245b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a4d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010385f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010364e(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_60;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010373a(param_1,2);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  sVar2 = strlen(__s);
  for (local_60 = 0; local_60 < sVar2; local_60 = local_60 + 1) {
    local_48[local_60] = __s[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_0010375e(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f26(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103236(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103ced(void)

{
  return;
}




undefined8 FUN_0010324e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c40(void)

{
  return 0;
}




void FUN_001033bf(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034b6(&local_10);
  FUN_00102cb4(uVar1);
  return;
}




void FUN_00102cc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d34(param_3);
  uVar2 = FUN_00102d34(local_28);
  uVar3 = FUN_00102d34(local_20);
  uVar1 = FUN_00102f79(uVar3,uVar2,uVar1);
  FUN_00102fae(&local_30,uVar1);
  return;
}




void FUN_00102d46(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101d64(undefined8 param_1,undefined8 param_2)

{
  FUN_0010264b(param_1,param_2);
  return;
}




undefined8 FUN_00102ff5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001031e9(param_1);
  puVar1 = (undefined8 *)FUN_00103207(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




long FUN_0010275c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101db4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101db4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010194c(undefined8 param_1)

{
  FUN_0010192c(param_1);
  return;
}




void FUN_001030f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ce(param_1,param_2,param_3);
  return;
}




void FUN_001039ee(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102b91(void)

{
  return;
}




void FUN_00103f68(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




long FUN_00102ba4(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001029be(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e0f(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103d66(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d2f,local_18);
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




void FUN_00102bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bba(param_3);
  FUN_00102ece(param_1,param_2,uVar1);
  return;
}




void FUN_00103cb6(void)

{
  return;
}




void * FUN_00103500(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_001018f6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_0010373a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_0010264b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b91(param_1,param_2);
  return;
}




void FUN_00102f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030f4(param_1,param_2,param_3);
  return;
}




void FUN_00103d24(void)

{
  return;
}




void FUN_0010273e(undefined8 param_1)

{
  FUN_00102ba4(param_1);
  return;
}




void FUN_0010338a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103453(param_1,param_2,param_3);
  return;
}




void FUN_00102b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e9d(param_1,param_2,param_3);
  return;
}




void FUN_00103c8a(void)

{
  return;
}




ulong * FUN_00102de0(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001029f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e3d(param_2);
  uVar2 = FUN_00102e3d(param_1);
  FUN_00102c7f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103cf8(void)

{
  return;
}




void FUN_001019b8(long *param_1)

{
  FUN_00101d18(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_0010190c(param_1);
  return;
}




void FUN_00102e9d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a4(param_1,param_2,param_3);
  return;
}




void * FUN_00103453(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010319b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d34(param_1);
  uVar1 = FUN_0010331e(uVar1,param_2,param_3);
  FUN_00102fae(&local_10,uVar1);
  return;
}




void FUN_00102fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010319b(param_1,param_2,param_3);
  return;
}




void FUN_00103c74(void)

{
  return;
}




void FUN_001016e5(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010194c(local_58);
                    /* try { // try from 00101712 to 0010180b has its CatchHandler @ 00101857 */
  local_68 = operator_new__(100);
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101a52(local_58);
  FUN_00101aa2(local_38,&local_60);
  FUN_00101ad0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a52(local_58);
  FUN_00101aa2(local_38,&local_60);
  FUN_00101ad0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a52(local_58);
  FUN_00101aa2(local_38,&local_60);
  FUN_00101ad0(local_58,local_38[0],1,&local_68);
  FUN_00101b96(local_38,local_58);
                    /* try { // try from 00101813 to 00101817 has its CatchHandler @ 00101842 */
  FUN_0010364e(local_38);
  FUN_00101a0a(local_38);
  FUN_00101a0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038b5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101998(undefined8 param_1)

{
  FUN_00101d08(param_1);
  return;
}




undefined8 FUN_00102c33(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f26(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102382(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d92(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102aa4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a7a(param_1,param_2);
  FUN_00101cd6(param_1);
  return;
}




void FUN_00103c95(void)

{
  return;
}




ulong * FUN_00103207(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101a52(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d92(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101549(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010194c(local_58);
                    /* try { // try from 00101576 to 0010166f has its CatchHandler @ 001016bb */
  local_68 = operator_new__(100);
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101a52(local_58);
  FUN_00101aa2(local_38,&local_60);
  FUN_00101ad0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a52(local_58);
  FUN_00101aa2(local_38,&local_60);
  FUN_00101ad0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a52(local_58);
  FUN_00101aa2(local_38,&local_60);
  FUN_00101ad0(local_58,local_38[0],1,&local_68);
  FUN_00101b96(local_38,local_58);
                    /* try { // try from 00101677 to 0010167b has its CatchHandler @ 001016a6 */
  FUN_00103563(local_38);
  FUN_00101a0a(local_38);
  FUN_00101a0a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010398d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103d19(void)

{
  return;
}




void FUN_00103f2a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010375e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103d03(void)

{
  return;
}




void FUN_00102f79(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103125(param_1,param_2,param_3);
  return;
}




void FUN_001027f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cb4(param_2);
  uVar2 = FUN_00102cb4(param_1);
  FUN_00102cc6(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c09(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f12(param_1,param_2);
  return;
}




void FUN_00103260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d34(param_3);
  uVar2 = FUN_00103369(local_28);
  uVar3 = FUN_00103369(local_20);
  uVar1 = FUN_0010338a(uVar3,uVar2,uVar1);
  FUN_00102fae(&local_30,uVar1);
  return;
}




void FUN_0010192c(undefined8 param_1)

{
  FUN_0010196c(param_1);
  return;
}




void FUN_001024be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102aa4(param_1,param_3);
                    /* try { // try from 001024f8 to 001024fc has its CatchHandler @ 001024ff */
  FUN_00102ada(param_1,param_2);
  return;
}




void FUN_00103ca0(void)

{
  return;
}




void FUN_00103cc1(void)

{
  return;
}




void FUN_00103d0e(void)

{
  return;
}




undefined8 FUN_001024ac(undefined8 param_1)

{
  return param_1;
}




int FUN_00103c4f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00102e3d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f26(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026aa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102bba(param_3);
  uVar2 = FUN_00102ba4(param_1);
  FUN_00102bcc(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103834(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00103e33(pthread_t *param_1)

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




void FUN_00103962(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b34(param_1,param_2,param_3);
  return;
}




void FUN_00102848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d34(param_2);
  uVar2 = FUN_00102d34(param_1);
  FUN_00102d46(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001034b6(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102fae(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103c31(void)

{
  return 1;
}




void FUN_0010260a(void)

{
  return;
}




void FUN_00103c69(void)

{
  return;
}




void FUN_00103784(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001039bb(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102899(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d84(param_1,param_2,param_3);
  return;
}




void FUN_00102c7f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f44(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102698(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f12(void)

{
  return;
}




void FUN_0010305e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103236(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102619(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b6a(param_1,param_2,param_3);
  return;
}




void FUN_001031e9(undefined8 param_1)

{
  FUN_00103236(param_1);
  return;
}




void FUN_00101881(void)

{
  FUN_001016e5();
  return;
}




void FUN_0010196c(undefined8 param_1)

{
  FUN_00101cb6(param_1);
  FUN_00101cd6(param_1);
  return;
}




undefined8 FUN_00102a4d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a7a(param_1,param_2);
  return param_1;
}




void FUN_001038e0(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




undefined8 FUN_0010257c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102676(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010190c(undefined8 param_1)

{
  FUN_00101998(param_1);
  return;
}




void FUN_00103f49(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103d2f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010388a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103eb1(undefined8 *param_1)

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




ulong FUN_00103b52(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e62(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_001028ce(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102382(local_80);
      local_60 = FUN_0010275c(&local_88,&local_78);
      local_70 = FUN_001029be(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d52(local_80);
                    /* try { // try from 0010216c to 001021f7 has its CatchHandler @ 001022af */
      FUN_00102899(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d52(local_80);
      puVar2 = (undefined8 *)FUN_00101db4(&local_88);
      local_70 = FUN_001029f5(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d52(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101db4(&local_88);
      local_70 = FUN_001029f5(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d52(local_80);
      FUN_00101d64(*local_80,local_80[1],uVar1);
      FUN_00101d18(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026aa(local_38,param_1,param_4);
                    /* try { // try from 00101eec to 001020bf has its CatchHandler @ 00102291 */
      local_50 = FUN_0010273e(local_38);
      local_78 = FUN_00101a52(local_80);
      local_48 = FUN_0010275c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d52(local_80);
        FUN_001027a0(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101db4(&local_88);
        FUN_001027f8(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101db4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101db4(&local_88);
        FUN_00102848(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d52(local_80);
        lVar4 = FUN_00102899(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d52(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101db4(&local_88);
        FUN_001027a0(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101db4(&local_88);
        FUN_00102848(*puVar2,local_40,local_50);
      }
      FUN_0010270a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102434(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00102524(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102676(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101490();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_0010380a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




long FUN_00103125(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00101cb6(undefined8 param_1)

{
  FUN_0010260a(param_1);
  return;
}




void FUN_00103cd7(void)

{
  return;
}




void FUN_00101ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101dc6(param_1);
  local_18 = FUN_00101e1d(&local_38,&local_20);
  local_20 = FUN_00102382(local_30);
  uVar1 = FUN_001023ce(&local_20,local_18);
  FUN_00101e62(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102382(local_30);
  FUN_001023ce(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d92(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103e8e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102ece(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102bba(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018f6(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101d52(undefined8 param_1)

{
  return param_1;
}




void FUN_00104010(void)

{
  return;
}




void FUN_00101aa2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101db4(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001034cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103500(param_1,param_2,param_3);
  return;
}




void FUN_00101d18(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102619(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102a7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e8a(param_1,param_2);
  return;
}




void FUN_00102676(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101cd6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001037de(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cab(void)

{
  return;
}




undefined8 FUN_00101dc6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102676(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b6a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}



