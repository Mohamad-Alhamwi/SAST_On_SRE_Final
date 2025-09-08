
void FUN_00101b66(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d92(param_2);
  FUN_00101d41(&local_21,uVar1);
  FUN_00101da4(param_1,&local_21);
  FUN_00101ae0(&local_21);
  uVar1 = FUN_00101e2c(param_2);
  uVar2 = FUN_00101ddc(param_2);
                    /* try { // try from 00101bf2 to 00101bf6 has its CatchHandler @ 00101bf9 */
  FUN_00101e78(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101840(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a74(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(0x28);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 0010189f to 001018dc has its CatchHandler @ 00101928 */
  FUN_00101b2c(local_58,&local_60);
  FUN_00101b2c(local_58,&local_60);
  FUN_00101b2c(local_58,&local_60);
  FUN_00101b66(local_38,local_58);
                    /* try { // try from 001018e4 to 001018e8 has its CatchHandler @ 00101913 */
  FUN_0010152b(local_38);
  FUN_00101a94(local_38);
  FUN_00101a94(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020b0(param_2);
  FUN_00102086(param_1,uVar1);
  FUN_001019de(param_1);
  return;
}




undefined8 FUN_001019c7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001025ef(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101d92(undefined8 param_1)

{
  return param_1;
}




void FUN_001029ae(void)

{
  return;
}




void FUN_00102a27(void)

{
  return;
}




void FUN_00101e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102122(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010216c(&local_18);
    FUN_0010218e(local_10,uVar2);
    FUN_00102148(&local_18);
  }
  return;
}




void FUN_001029cf(void)

{
  return;
}




void FUN_00102cd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001024be(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102122(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00101f64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102222(param_1);
  uVar2 = FUN_00101ee6(param_1);
  FUN_00102246(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f51(param_2);
  uVar4 = FUN_001016dc(uVar1);
  FUN_001022bf(uVar2,uVar4,uVar3);
  FUN_001022fc(local_38,0);
  FUN_00102280(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102104(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001015ce(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010162c(param_1);
  FUN_00101678(&local_18);
  FUN_0010169c(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010297a(void)

{
  return 0;
}




void FUN_00102728(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102058(undefined8 param_1,undefined8 param_2)

{
  FUN_00102086(param_1,param_2);
  return param_1;
}




void FUN_00102246(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023a9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102a06(void)

{
  return;
}




void FUN_00101c52(void)

{
  return;
}




undefined8 FUN_0010296b(void)

{
  return 1;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101c32(param_1);
  FUN_001019de(param_1);
  return;
}




void FUN_00102599(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a53(void)

{
  return;
}




void FUN_00102498(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010162c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016be(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024f0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a69(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102354(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001023a9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102544(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ae0(undefined8 param_1)

{
  FUN_00101c52(param_1);
  return;
}




undefined8 FUN_00102aa0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a69,local_18);
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




void FUN_0010169c(undefined8 *param_1)

{
  FUN_001016dc(*param_1);
  return;
}




void FUN_001022bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f51(param_3);
  FUN_001023bc(param_1,param_2,uVar1);
  return;
}




int FUN_00102989(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102086(undefined8 param_1,undefined8 param_2)

{
  FUN_0010231e(param_1,param_2);
  return;
}




long * FUN_00101678(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101a94(undefined8 param_1)

{
  FUN_00101b00(param_1);
  return;
}




void FUN_00102c83(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001029da(void)

{
  return;
}




void FUN_00102c64(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001019de(undefined8 param_1)

{
  FUN_001019fe(param_1);
  return;
}




undefined8 * FUN_00102148(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010172e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a74(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(10);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 0010178d to 001017ca has its CatchHandler @ 00101816 */
  FUN_00101b2c(local_58,&local_60);
  FUN_00101b2c(local_58,&local_60);
  FUN_00101b2c(local_58,&local_60);
  FUN_00101b66(local_38,local_58);
                    /* try { // try from 001017d2 to 001017d6 has its CatchHandler @ 00101801 */
  FUN_00101489(local_38);
  FUN_00101a94(local_38);
  FUN_00101a94(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010256e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010171c(undefined8 param_1)

{
  return param_1;
}




void FUN_001016fe(undefined8 param_1)

{
  FUN_0010171c(param_1);
  return;
}




undefined8 FUN_00101962(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102498("Calling good()...");
  FUN_00101952();
  FUN_00102498("Finished good()");
  FUN_00102498("Calling bad()...");
  FUN_0010172e();
  FUN_00102498("Finished bad()");
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102ca2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001029f0(void)

{
  return;
}




void FUN_0010231e(void)

{
  return;
}




void FUN_0010261a(undefined4 param_1)

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




undefined8 FUN_001020b0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010246e(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102d40(void)

{
  return;
}




void FUN_00101a34(undefined8 param_1)

{
  FUN_00101ae0(param_1);
  return;
}




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101ab4(param_1);
  return;
}




void FUN_001016be(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101b2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010162c(param_1);
  FUN_00101ce0(param_1,uVar1,param_2);
  return;
}




void FUN_001029e5(void)

{
  return;
}




void FUN_001026c7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001029fb(void)

{
  return;
}




void FUN_00101c62(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016dc(local_20);
    uVar3 = FUN_00101ee6(param_1);
    FUN_00101ef8(uVar3,uVar2);
    FUN_00101f22(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102518(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a5e(void)

{
  return;
}




void FUN_00101b00(undefined8 param_1)

{
  FUN_00101c62(param_1);
  FUN_00101a34(param_1);
  return;
}




void FUN_00101ef8(undefined8 param_1,undefined8 param_2)

{
  FUN_001021dc(param_1,param_2);
  return;
}




undefined8 FUN_00101f51(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e2c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102104(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029c4(void)

{
  return;
}




void FUN_001021dc(void)

{
  return;
}




void FUN_00102a3d(void)

{
  return;
}




undefined8 FUN_00101ee6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102332(long param_1)

{
  FUN_00102400(param_1 + 0x10);
  return;
}




void FUN_001026f5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101d41(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102058(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101ddc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102104(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102222(undefined8 param_1)

{
  FUN_0010237b(param_1,1);
  return;
}




undefined8 FUN_00102480(void)

{
  return 0x555555555555555;
}




void FUN_00102a1c(void)

{
  return;
}




bool FUN_00102b6d(pthread_t *param_1)

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




undefined8 FUN_00102beb(undefined8 *param_1)

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




void FUN_00102a11(void)

{
  return;
}




void FUN_00102a32(void)

{
  return;
}




void FUN_00102400(undefined8 param_1)

{
  FUN_0010246e(param_1);
  return;
}




void FUN_001025c4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001021ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102354(param_1,param_2,param_3);
  return;
}




void FUN_0010218e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f51(param_2);
  uVar2 = FUN_0010162c(param_1);
  FUN_00101ce0(param_1,uVar2,uVar1);
  return;
}




void FUN_001019fe(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101a74(undefined8 param_1)

{
  FUN_00101a54(param_1);
  return;
}




void FUN_00102674(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001023bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f51(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019c7(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015ce(param_1);
  __dest = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  memmove(__dest,&local_38,0x28);
  FUN_001024f0(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102bc8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101952(void)

{
  FUN_00101840();
  return;
}




void FUN_0010202e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010216c(undefined8 *param_1)

{
  FUN_00102332(*param_1);
  return;
}




void FUN_00101ed6(void)

{
  return;
}




long FUN_001022fc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001029b9(void)

{
  return;
}




void FUN_0010152b(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015ce(param_1);
  __dest = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  memmove(__dest,&local_38,0x28);
  FUN_001024f0(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102280(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021ef(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010237b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010241e(param_1,param_2,0);
  return;
}




void FUN_0010269c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001029a3(void)

{
  return;
}




void FUN_0010241e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102480(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001016dc(long param_1)

{
  FUN_001016fe(param_1 + 0x10);
  return;
}




void FUN_00101f22(undefined8 param_1,undefined8 param_2)

{
  FUN_001021ef(param_1,param_2,1);
  return;
}




void FUN_00101c32(undefined8 param_1)

{
  FUN_00101ed6(param_1);
  return;
}




void FUN_00101ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f51(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f64(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010202e(param_1,1);
  return;
}




void FUN_00101da4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020b0(param_2);
  FUN_001020c2(param_1,uVar1);
  return;
}




ulong FUN_0010288c(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102788(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a48(void)

{
  return;
}



