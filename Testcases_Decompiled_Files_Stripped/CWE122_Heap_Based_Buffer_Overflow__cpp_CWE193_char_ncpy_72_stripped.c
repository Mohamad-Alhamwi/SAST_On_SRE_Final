
void FUN_00102be8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bbe(param_1,param_2);
  FUN_00101e1a(param_1);
  return;
}




void FUN_00102cae(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c4c(void)

{
  return;
}




void FUN_00103c6d(void)

{
  return;
}




void FUN_00101dfa(undefined8 param_1)

{
  FUN_0010274e(param_1);
  return;
}




void FUN_00103c20(void)

{
  return;
}




void FUN_001037a8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001037fe(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001035fa(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102efe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025f0(param_1);
  FUN_00103139(uVar1);
  return;
}




void FUN_00103c78(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101a39(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001036a7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001025f0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102e78(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cfe(param_3);
  FUN_00103012(param_1,param_2,uVar1);
  return;
}




void FUN_001036cd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103dd7(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_0010169a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101a50(undefined8 param_1)

{
  FUN_00101adc(param_1);
  return;
}




undefined8 FUN_001027dc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010306a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103753(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103412(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103503(param_2);
  uVar2 = FUN_00103503(param_1);
  FUN_00103529(uVar2,uVar1,param_3);
  return;
}




void FUN_00103088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103238(param_1,param_2,param_3);
  return;
}




void FUN_001038d6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102b91(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bbe(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101ef8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bc8(void)

{
  return;
}




undefined8 FUN_00102d77(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010306a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103caf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c78,local_18);
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




undefined8 FUN_00103139(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010332d(param_1);
  puVar1 = (undefined8 *)FUN_0010334b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00101ab0(undefined8 param_1)

{
  FUN_00101dfa(param_1);
  FUN_00101e1a(param_1);
  return;
}




void FUN_00102d4d(undefined8 param_1,undefined8 param_2)

{
  FUN_00103056(param_1,param_2);
  return;
}




void FUN_00102c1e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b02(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001016be(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a90(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001016f3 to 001017cb has its CatchHandler @ 00101817 */
  local_68 = operator_new__(10);
  local_60 = FUN_00101b96(local_58);
  FUN_00101be6(local_38,&local_60);
  FUN_00101c14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b96(local_58);
  FUN_00101be6(local_38,&local_60);
  FUN_00101c14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b96(local_58);
  FUN_00101be6(local_38,&local_60);
  FUN_00101c14(local_58,local_38[0],1,&local_68);
  FUN_00101cda(local_38,local_58);
                    /* try { // try from 001017d3 to 001017d7 has its CatchHandler @ 00101802 */
  FUN_00101549(local_38);
  FUN_00101b4e(local_38);
  FUN_00101b4e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010298c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e78(param_2);
  uVar2 = FUN_00102e78(param_1);
  FUN_00102e8a(uVar2,uVar1,param_3);
  return;
}




void FUN_00101c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f0a(param_1);
  local_18 = FUN_00101f61(&local_38,&local_20);
  local_20 = FUN_001024c6(local_30);
  uVar1 = FUN_00102512(&local_20,local_18);
  FUN_00101fa6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024c6(local_30);
  FUN_00102512(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bbe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fce(param_1,param_2);
  return;
}




void * FUN_00103597(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101cda(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025f0(param_2);
  FUN_0010259f(&local_31,uVar1);
  uVar1 = FUN_00102578(param_2);
                    /* try { // try from 00101d40 to 00101d44 has its CatchHandler @ 00101dad */
  FUN_00102602(param_1,uVar1,&local_31);
  FUN_00101adc(&local_31);
  uVar2 = FUN_00101e96(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026c0(param_2);
  uVar4 = FUN_00102668(param_2);
                    /* try { // try from 00101d8e to 00101d92 has its CatchHandler @ 00101dcb */
  uVar1 = FUN_00102718(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103937(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102dc3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103088(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102668(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103eb1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




undefined8 FUN_00102cfe(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bf4(void)

{
  return;
}




undefined8 FUN_00103392(undefined8 param_1)

{
  return param_1;
}




void * FUN_00103644(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_00103269(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001033a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e78(param_3);
  uVar2 = FUN_001034ad(local_28);
  uVar3 = FUN_001034ad(local_20);
  uVar1 = FUN_001034ce(uVar3,uVar2,uVar1);
  FUN_001030f2(&local_30,uVar1);
  return;
}




void FUN_00102cd5(void)

{
  return;
}




void FUN_0010278f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cd5(param_1,param_2);
  return;
}




void FUN_001037d3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001030f2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101f0a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010337a(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00101b96(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ed6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103108(param_1,param_2,param_3);
  return;
}




void FUN_00102fce(void)

{
  return;
}




void FUN_00103bd3(void)

{
  return;
}




void FUN_001030bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103269(param_1,param_2,param_3);
  return;
}




void FUN_00103883(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101be6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ef8(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102e8a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001032df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e78(param_1);
  uVar1 = FUN_00103462(uVar1,param_2,param_3);
  FUN_001030f2(&local_10,uVar1);
  return;
}




void FUN_00101adc(undefined8 param_1)

{
  FUN_00101e4c(param_1);
  return;
}




undefined8 FUN_00102512(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ed6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c78(param_1,param_2,param_3);
  return;
}




void FUN_00101e1a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001027ba(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101841(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a90(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101876 to 0010194e has its CatchHandler @ 0010199a */
  local_68 = operator_new__(0xb);
  local_60 = FUN_00101b96(local_58);
  FUN_00101be6(local_38,&local_60);
  FUN_00101c14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b96(local_58);
  FUN_00101be6(local_38,&local_60);
  FUN_00101c14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b96(local_58);
  FUN_00101be6(local_38,&local_60);
  FUN_00101c14(local_58,local_38[0],1,&local_68);
  FUN_00101cda(local_38,local_58);
                    /* try { // try from 00101956 to 0010195a has its CatchHandler @ 00101985 */
  FUN_001015f1(local_38);
  FUN_00101b4e(local_38);
  FUN_00101b4e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f53(undefined8 param_1,undefined8 param_2)

{
  FUN_001031a2(param_1,param_2,0);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00103c15(void)

{
  return;
}




void FUN_00103056(void)

{
  return;
}




void FUN_00103e73(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103904(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010293c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102df8(param_2);
  uVar2 = FUN_00102df8(param_1);
  FUN_00102e0a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103bb2(void)

{
  return;
}




void FUN_00103829(undefined4 param_1)

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




ulong * FUN_0010334b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c0a(void)

{
  return;
}




void FUN_00103238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103412(param_1,param_2,param_3);
  return;
}




void FUN_00103503(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035fa(&local_10);
  FUN_00102df8(uVar1);
  return;
}




void FUN_00102fe1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e8(param_1,param_2,param_3);
  return;
}




void FUN_00102e0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e78(param_3);
  uVar2 = FUN_00102e78(local_28);
  uVar3 = FUN_00102e78(local_20);
  uVar1 = FUN_001030bd(uVar3,uVar2,uVar1);
  FUN_001030f2(&local_30,uVar1);
  return;
}




int FUN_00103b98(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong * FUN_00102f24(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c2b(void)

{
  return;
}




void FUN_00103727(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00103a9b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103392(param_2);
  uVar2 = FUN_00103392(param_1);
  FUN_001033a4(uVar2,uVar1,param_3);
  return;
}




void FUN_001027ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cfe(param_3);
  uVar2 = FUN_00102ce8(param_1);
  FUN_00102d10(*param_1,uVar2,uVar1);
  return;
}




ulong FUN_00102a12(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102efe(param_1);
  lVar2 = FUN_00102578(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102578(local_40);
  local_30 = FUN_00102578(local_40);
  plVar3 = (long *)FUN_00102f24(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102578(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102efe(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102efe(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103be9(void)

{
  return;
}




void FUN_00103e92(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101e96(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103997(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d77(param_2);
  uVar2 = FUN_00102d77(param_1);
  FUN_00102dc3(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00102f81(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010306a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038ab(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032df(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_001019c4(void)

{
  FUN_00101841();
  return;
}




void FUN_0010377d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00102578(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe1(param_1,param_2,param_3);
  return;
}




void FUN_00101fa6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a12(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024c6(local_80);
      local_60 = FUN_001028a0(&local_88,&local_78);
      local_70 = FUN_00102b02(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e96(local_80);
                    /* try { // try from 001022b0 to 0010233b has its CatchHandler @ 001023f3 */
      FUN_001029dd(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e96(local_80);
      puVar2 = (undefined8 *)FUN_00101ef8(&local_88);
      local_70 = FUN_00102b39(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e96(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ef8(&local_88);
      local_70 = FUN_00102b39(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e96(local_80);
      FUN_00101ea8(*local_80,local_80[1],uVar1);
      FUN_00101e5c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027ee(local_38,param_1,param_4);
                    /* try { // try from 00102030 to 00102203 has its CatchHandler @ 001023d5 */
      local_50 = FUN_00102882(local_38);
      local_78 = FUN_00101b96(local_80);
      local_48 = FUN_001028a0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e96(local_80);
        FUN_001028e4(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ef8(&local_88);
        FUN_0010293c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ef8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ef8(&local_88);
        FUN_0010298c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e96(local_80);
        lVar4 = FUN_001029dd(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e96(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ef8(&local_88);
        FUN_001028e4(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ef8(&local_88);
        FUN_0010298c(*puVar2,local_40,local_50);
      }
      FUN_0010284e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010284e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ce8(param_1);
  FUN_00102d4d(*param_1,uVar1);
  return;
}




void FUN_00101e4c(void)

{
  return;
}




undefined8 FUN_001034ad(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027dc(&local_10);
  return *puVar1;
}




void FUN_00103012(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cfe(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a39(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001015f1(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010169a(param_1,2);
  __dest = (char *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  strncpy(__dest,local_1b,sVar2 + 1);
  FUN_001036a7(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010275d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cae(param_1,param_2,param_3);
  return;
}




bool FUN_00103d7c(pthread_t *param_1)

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




long FUN_00102ce8(long param_1)

{
  return param_1 + 8;
}




void FUN_00101549(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010169a(param_1,2);
  __dest = (char *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  strncpy(__dest,local_1b,sVar2 + 1);
  FUN_001036a7(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010360f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103644(param_1,param_2,param_3);
  return;
}




void FUN_001036ff(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_001028a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ef8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ef8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101e5c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010275d(param_1,param_2,param_3);
  }
  return;
}




void FUN_001034ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103597(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001019d4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036a7("Calling good()...");
  FUN_001019c4();
  FUN_001036a7("Finished good()");
  FUN_001036a7("Calling bad()...");
  FUN_001016be();
  FUN_001036a7("Finished bad()");
  return 0;
}




void FUN_0010332d(undefined8 param_1)

{
  FUN_0010337a(param_1);
  return;
}




void FUN_00103bbd(void)

{
  return;
}




undefined8 FUN_001026c0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b4e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e96(param_1);
  FUN_00101ea8(*param_1,param_1[1],uVar1);
  FUN_00101afc(param_1);
  return;
}




void FUN_00103bff(void)

{
  return;
}




undefined8 FUN_00103b7a(void)

{
  return 1;
}




long FUN_00101f61(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027dc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027dc(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102b02(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f53(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103bde(void)

{
  return;
}




void FUN_00102602(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102be8(param_1,param_3);
                    /* try { // try from 0010263c to 00102640 has its CatchHandler @ 00102643 */
  FUN_00102c1e(param_1,param_2);
  return;
}




void FUN_00101a70(undefined8 param_1)

{
  FUN_00101ab0(param_1);
  return;
}




void FUN_00101ea8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010278f(param_1,param_2);
  return;
}




void FUN_00101ed6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103529(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e78(param_3);
  uVar2 = FUN_00102e78(local_28);
  uVar3 = FUN_00102e78(local_20);
  uVar1 = FUN_0010360f(uVar3,uVar2,uVar1);
  FUN_001030f2(&local_30,uVar1);
  return;
}




undefined8 FUN_00103b89(void)

{
  return 0;
}




undefined8 FUN_00102df8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c57(void)

{
  return;
}




void FUN_0010274e(void)

{
  return;
}




undefined8 FUN_001024c6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ed6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103dfa(undefined8 *param_1)

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




void FUN_00103c41(void)

{
  return;
}




void FUN_00102882(undefined8 param_1)

{
  FUN_00102ce8(param_1);
  return;
}




void FUN_00102b39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f81(param_2);
  uVar2 = FUN_00102f81(param_1);
  FUN_00102dc3(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 * FUN_00103462(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001031a2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010337a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103f50(void)

{
  return;
}




void FUN_00101a90(undefined8 param_1)

{
  FUN_00101a70(param_1);
  return;
}




void FUN_00103c36(void)

{
  return;
}




undefined8 FUN_0010259f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b91(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101afc(long *param_1)

{
  FUN_00101e5c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a50(param_1);
  return;
}




void FUN_00103ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103c62(void)

{
  return;
}




void FUN_001029dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec8(param_1,param_2,param_3);
  return;
}



