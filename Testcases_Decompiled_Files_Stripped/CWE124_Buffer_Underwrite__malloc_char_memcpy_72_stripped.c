
void FUN_0010361d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f6c(param_3);
  uVar2 = FUN_00102f6c(local_28);
  uVar3 = FUN_00102f6c(local_20);
  uVar1 = FUN_00103703(uVar3,uVar2,uVar1);
  FUN_001031e6(&local_30,uVar1);
  return;
}




void FUN_00103871(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a2b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103847(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031fc(param_1,param_2,param_3);
  return;
}




void FUN_001018fb(void)

{
  long in_FS_OFFSET;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b84(local_58);
  local_70 = (void *)0x0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  local_68 = FUN_00101c8a(local_58);
  FUN_00101cda(local_38,&local_68);
                    /* try { // try from 001019ad to 00101a42 has its CatchHandler @ 00101a8e */
  FUN_00101d08(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c8a(local_58);
  FUN_00101cda(local_38,&local_68);
  FUN_00101d08(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c8a(local_58);
  FUN_00101cda(local_38,&local_68);
  FUN_00101d08(local_58,local_38[0],1,&local_70);
  FUN_00101dce(local_38,local_58);
                    /* try { // try from 00101a4a to 00101a4e has its CatchHandler @ 00101a79 */
  FUN_0010160f(local_38);
  FUN_00101c42(local_38);
  FUN_00101c42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010332c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103506(param_1,param_2,param_3);
  return;
}




void FUN_001030c2(void)

{
  return;
}




void FUN_00103d2a(void)

{
  return;
}




void FUN_00101ab8(void)

{
  FUN_001018fb();
  return;
}




long FUN_0010266c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001026f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cdc(param_1,param_3);
                    /* try { // try from 00102730 to 00102734 has its CatchHandler @ 00102737 */
  FUN_00102d12(param_1,param_2);
  return;
}




void FUN_00103296(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010346e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




long FUN_00102055(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001028d0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001028d0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001028ae(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010322d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103421(param_1);
  puVar1 = (undefined8 *)FUN_0010343f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010317c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010332c(param_1,param_2,param_3);
  return;
}




long FUN_00101716(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001033d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f6c(param_1);
  uVar1 = FUN_00103556(uVar1,param_2,param_3);
  FUN_001031e6(&local_10,uVar1);
  return;
}




void FUN_0010391d(undefined4 param_1)

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




int FUN_00103c8c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102e6b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010315e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102942(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ddc(param_1);
  FUN_00102e41(*param_1,uVar1);
  return;
}




void FUN_0010389c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f0e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_00102ddc(long param_1)

{
  return param_1 + 8;
}




void FUN_00102d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d5(param_1,param_2,param_3);
  return;
}




void FUN_00102851(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102da2(param_1,param_2,param_3);
  return;
}




void FUN_00103cf3(void)

{
  return;
}




undefined8 FUN_001031e6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103da3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d6c,local_18);
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




long FUN_00102994(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fec(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fec(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103cc7(void)

{
  return;
}




ulong FUN_00103a8b(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103486(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001037f3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103d4b(void)

{
  return;
}




void FUN_001038f2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001031b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010335d(param_1,param_2,param_3);
  return;
}




void FUN_001031fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033d3(param_1,param_2,param_3);
  return;
}




void FUN_0010280c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d6c(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001035c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010368b(param_1,param_2,param_3);
  return;
}




void FUN_00101bd0(undefined8 param_1)

{
  FUN_00101f40(param_1);
  return;
}




void FUN_00102dc9(void)

{
  return;
}




void FUN_00101f9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102883(param_1,param_2);
  return;
}




void * FUN_0010368b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103d1f(void)

{
  return;
}




void FUN_00103047(undefined8 param_1,undefined8 param_2)

{
  FUN_00103296(param_1,param_2,0);
  return;
}




undefined8 FUN_00103075(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010315e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102eb7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010317c(param_1,param_2,param_3);
  return;
}




void FUN_001030d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032dc(param_1,param_2,param_3);
  return;
}




void FUN_00103f86(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001039f8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f40(void)

{
  return;
}




ulong FUN_00103b8f(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102c85(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cb2(param_1,param_2);
  return param_1;
}




void FUN_00103498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f6c(param_3);
  uVar2 = FUN_001035a1(local_28);
  uVar3 = FUN_001035a1(local_20);
  uVar1 = FUN_001035c2(uVar3,uVar2,uVar1);
  FUN_001031e6(&local_30,uVar1);
  return;
}




void FUN_00102da2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_001038c7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102ff2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026e4(param_1);
  FUN_0010322d(uVar1);
  return;
}




bool FUN_00103e70(pthread_t *param_1)

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




void FUN_001032dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103486(param_2);
  uVar2 = FUN_00103486(param_1);
  FUN_00103498(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102eec(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bf0(long *param_1)

{
  FUN_00101f50(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b44(param_1);
  return;
}




undefined8 FUN_00101ffe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001028ae(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103421(undefined8 param_1)

{
  FUN_0010346e(param_1);
  return;
}




void FUN_00103977(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103703(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103738(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001035a1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001028d0(&local_10);
  return *puVar1;
}




void FUN_00103d6c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ba4(undefined8 param_1)

{
  FUN_00101eee(param_1);
  FUN_00101f0e(param_1);
  return;
}




void FUN_00101dce(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026e4(param_2);
  FUN_00102693(&local_31,uVar1);
  uVar1 = FUN_0010266c(param_2);
                    /* try { // try from 00101e34 to 00101e38 has its CatchHandler @ 00101ea1 */
  FUN_001026f6(param_1,uVar1,&local_31);
  FUN_00101bd0(&local_31);
  uVar2 = FUN_00101f8a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001027b4(param_2);
  uVar4 = FUN_0010275c(param_2);
                    /* try { // try from 00101e82 to 00101e86 has its CatchHandler @ 00101ebf */
  uVar1 = FUN_0010280c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ac8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010379b("Calling good()...");
  FUN_00101ab8();
  FUN_0010379b("Finished good()");
  FUN_0010379b("Calling bad()...");
  FUN_0010173a();
  FUN_0010379b("Finished bad()");
  return 0;
}




void FUN_00103cdd(void)

{
  return;
}




undefined8 FUN_00101fec(undefined8 param_1)

{
  return param_1;
}




void FUN_0010314a(void)

{
  return;
}




void FUN_001028e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102df2(param_3);
  uVar2 = FUN_00102ddc(param_1);
  FUN_00102e04(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101b84(undefined8 param_1)

{
  FUN_00101b64(param_1);
  return;
}




void FUN_00102f7e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103ecb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010379b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101ffe(param_1);
  local_18 = FUN_00102055(&local_38,&local_20);
  local_20 = FUN_001025ba(local_30);
  uVar1 = FUN_00102606(&local_20,local_18);
  FUN_0010209a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001025ba(local_30);
  FUN_00102606(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_0010209a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102b06(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001025ba(local_80);
      local_60 = FUN_00102994(&local_88,&local_78);
      local_70 = FUN_00102bf6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f8a(local_80);
                    /* try { // try from 001023a4 to 0010242f has its CatchHandler @ 001024e7 */
      FUN_00102ad1(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f8a(local_80);
      puVar2 = (undefined8 *)FUN_00101fec(&local_88);
      local_70 = FUN_00102c2d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f8a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fec(&local_88);
      local_70 = FUN_00102c2d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f8a(local_80);
      FUN_00101f9c(*local_80,local_80[1],uVar1);
      FUN_00101f50(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028e2(local_38,param_1,param_4);
                    /* try { // try from 00102124 to 001022f7 has its CatchHandler @ 001024c9 */
      local_50 = FUN_00102976(local_38);
      local_78 = FUN_00101c8a(local_80);
      local_48 = FUN_00102994(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f8a(local_80);
        FUN_001029d8(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fec(&local_88);
        FUN_00102a30(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fec(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fec(&local_88);
        FUN_00102a80(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f8a(local_80);
        lVar4 = FUN_00102ad1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f8a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fec(&local_88);
        FUN_001029d8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fec(&local_88);
        FUN_00102a80(*puVar2,local_40,local_50);
      }
      FUN_00102942(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d09(void)

{
  return;
}




undefined8 FUN_00103c6e(void)

{
  return 1;
}




void FUN_00103506(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035f7(param_2);
  uVar2 = FUN_001035f7(param_1);
  FUN_0010361d(uVar2,uVar1,param_3);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00101716(param_1,2);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_0010379b(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102df2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103106(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102df2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101b2d(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010381b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101f8a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eec(param_2);
  uVar2 = FUN_00102eec(param_1);
  FUN_00102efe(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103eee(undefined8 *param_1)

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




void FUN_00103fa5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_001029d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e6b(param_2);
  uVar2 = FUN_00102e6b(param_1);
  FUN_00102eb7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101b64(undefined8 param_1)

{
  FUN_00101ba4(param_1);
  return;
}




void FUN_00103d56(void)

{
  return;
}




void FUN_00101c42(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f8a(param_1);
  FUN_00101f9c(*param_1,param_1[1],uVar1);
  FUN_00101bf0(param_1);
  return;
}




long FUN_0010335d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102d12(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bf6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103cbc(void)

{
  return;
}




void FUN_00103cfe(void)

{
  return;
}




ulong FUN_00102b06(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ff2(param_1);
  lVar2 = FUN_0010266c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010266c(local_40);
  local_30 = FUN_0010266c(local_40);
  plVar3 = (long *)FUN_00103018(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010266c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ff2(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ff2(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102df2(param_3);
  FUN_00103106(param_1,param_2,uVar1);
  return;
}




void FUN_0010399f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 * FUN_00103556(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103d40(void)

{
  return;
}




undefined8 FUN_00102bf6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103047(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103d61(void)

{
  return;
}




undefined8 FUN_00103c7d(void)

{
  return 0;
}




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101bd0(param_1);
  return;
}




void FUN_00102e41(undefined8 param_1,undefined8 param_2)

{
  FUN_0010314a(param_1,param_2);
  return;
}




void FUN_0010315e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103d14(void)

{
  return;
}




undefined8 FUN_00101b2d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102cdc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cb2(param_1,param_2);
  FUN_00101f0e(param_1);
  return;
}




undefined8 FUN_0010346e(void)

{
  return 0xfffffffffffffff;
}




void FUN_001035f7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036ee(&local_10);
  FUN_00102eec(uVar1);
  return;
}




void FUN_00102c2d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103075(param_2);
  uVar2 = FUN_00103075(param_1);
  FUN_00102eb7(uVar2,uVar1,param_3,param_4);
  return;
}




void * FUN_00103738(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101eee(undefined8 param_1)

{
  FUN_00102842(param_1);
  return;
}




void FUN_00101fca(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102efe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f6c(param_3);
  uVar2 = FUN_00102f6c(local_28);
  uVar3 = FUN_00102f6c(local_20);
  uVar1 = FUN_001031b1(uVar3,uVar2,uVar1);
  FUN_001031e6(&local_30,uVar1);
  return;
}




void FUN_0010160f(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00101716(param_1,2);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_0010379b(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ce8(void)

{
  return;
}




undefined8 FUN_00101c8a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fca(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010173a(void)

{
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b84(local_58);
  local_70 = 0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  local_68 = FUN_00101c8a(local_58);
  FUN_00101cda(local_38,&local_68);
                    /* try { // try from 001017f0 to 00101885 has its CatchHandler @ 001018d1 */
  FUN_00101d08(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c8a(local_58);
  FUN_00101cda(local_38,&local_68);
  FUN_00101d08(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c8a(local_58);
  FUN_00101cda(local_38,&local_68);
  FUN_00101d08(local_58,local_38[0],1,&local_70);
  FUN_00101dce(local_38,local_58);
                    /* try { // try from 0010188d to 00101891 has its CatchHandler @ 001018bc */
  FUN_00101509(local_38);
  FUN_00101c42(local_38);
  FUN_00101c42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f50(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102851(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102ad1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fbc(param_1,param_2,param_3);
  return;
}




void FUN_00103cd2(void)

{
  return;
}




void FUN_00103d35(void)

{
  return;
}




undefined8 FUN_001028d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102976(undefined8 param_1)

{
  FUN_00102ddc(param_1);
  return;
}




void FUN_00102a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f6c(param_2);
  uVar2 = FUN_00102f6c(param_1);
  FUN_00102f7e(uVar2,uVar1,param_3);
  return;
}




void FUN_00101cda(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fec(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103cb1(void)

{
  return;
}




undefined8 FUN_001036ee(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102693(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c85(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104040(void)

{
  return;
}




undefined8 FUN_00102606(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101fca(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102842(void)

{
  return;
}




ulong * FUN_0010343f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001027b4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001028ae(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001025ba(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fca(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039ca(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010275c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001028ae(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102f6c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cb2(undefined8 param_1,undefined8 param_2)

{
  FUN_001030c2(param_1,param_2);
  return;
}




undefined8 FUN_001026e4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca6(void)

{
  return;
}




void FUN_00103f67(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102883(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dc9(param_1,param_2);
  return;
}




ulong * FUN_00103018(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



