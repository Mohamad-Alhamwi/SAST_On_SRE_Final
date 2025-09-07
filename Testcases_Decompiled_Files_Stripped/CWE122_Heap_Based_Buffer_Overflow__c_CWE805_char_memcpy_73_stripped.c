
void FUN_00101f60(undefined8 *param_1)

{
  FUN_00102144(*param_1);
  return;
}




void FUN_00101868(undefined8 param_1)

{
  FUN_001019ca(param_1);
  FUN_0010179c(param_1);
  return;
}




undefined8 FUN_00101cbc(undefined8 param_1)

{
  return param_1;
}




void FUN_001022bc(undefined8 param_1)

{
  undefined8 *puVar1;
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
  puVar1 = (undefined8 *)FUN_001024dc(param_1);
  puVar1 = (undefined8 *)*puVar1;
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
  FUN_0010257f(puVar1);
  free(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d28(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102acc(void)

{
  return;
}




void FUN_00102058(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021cd(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102b87(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b50,local_18);
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




void FUN_00102130(void)

{
  return;
}




undefined8 FUN_00102cd2(undefined8 *param_1)

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




void FUN_001017fc(undefined8 param_1)

{
  FUN_00101868(param_1);
  return;
}




int FUN_00102a70(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001024dc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a48(param_1);
  FUN_0010253a(&local_18);
  FUN_0010255e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_001021e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d46(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101730(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001023cc(undefined8 param_1)

{
  undefined8 *puVar1;
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
  puVar1 = (undefined8 *)FUN_001024dc(param_1);
  puVar1 = (undefined8 *)*puVar1;
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
  FUN_0010257f(puVar1);
  free(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d46(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d58(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e22(param_1,1);
  return;
}




void FUN_00102b3a(void)

{
  return;
}




void FUN_00102b0e(void)

{
  return;
}




void FUN_00102242(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022a4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010262b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102e30(void)

{
  return;
}




void FUN_00101fd0(undefined8 param_1)

{
  FUN_00102166(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102b2f(void)

{
  return;
}




void FUN_00101eb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ea4(param_2);
  FUN_00101e7a(param_1,uVar1);
  FUN_00101746(param_1);
  return;
}




void FUN_00102ab6(void)

{
  return;
}




undefined8 FUN_00102a61(void)

{
  return 0;
}




undefined8 FUN_00101af5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e4c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a8a(void)

{
  return;
}




void FUN_0010275b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001027ae(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102aa0(void)

{
  return;
}




void FUN_00101746(undefined8 param_1)

{
  FUN_00101766(param_1);
  return;
}




void FUN_00101ef8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101848(undefined8 param_1)

{
  FUN_001019ba(param_1);
  return;
}




void FUN_00101b58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ea4(param_2);
  FUN_00101eb6(param_1,uVar1);
  return;
}




void FUN_00102680(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b45(void)

{
  return;
}




undefined8 FUN_00102292(undefined8 param_1)

{
  return param_1;
}




void FUN_001016bb(void)

{
  FUN_001015a2();
  return;
}




undefined8 FUN_00101b46(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101ea4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101489(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017dc(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(0x32);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001014ef to 0010152c has its CatchHandler @ 00101578 */
  FUN_00101894(local_58,&local_60);
  FUN_00101894(local_58,&local_60);
  FUN_00101894(local_58,&local_60);
  FUN_001018ce(local_38,local_58);
                    /* try { // try from 00101534 to 00101538 has its CatchHandler @ 00101563 */
  FUN_001022bc(local_38);
  FUN_001017fc(local_38);
  FUN_001017fc(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d4b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101d46(undefined8 param_1)

{
  return param_1;
}




long * FUN_0010253a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101c9a(long param_1)

{
  FUN_00101fd0(param_1 + 0x10);
  return;
}




void FUN_00102aab(void)

{
  return;
}




void FUN_00101c8a(void)

{
  return;
}




void FUN_00101c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f16(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f60(&local_18);
    FUN_00101f82(local_10,uVar2);
    FUN_00101f3c(&local_18);
  }
  return;
}




void FUN_00101cf8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102001(param_1,param_2,1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_001017dc(undefined8 param_1)

{
  FUN_001017bc(param_1);
  return;
}




void FUN_0010199a(undefined8 param_1)

{
  FUN_00101c8a(param_1);
  return;
}




void FUN_0010179c(undefined8 param_1)

{
  FUN_00101848(param_1);
  return;
}




void FUN_00102d89(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001026d6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ad7(void)

{
  return;
}




undefined8 FUN_001022a4(void)

{
  return 0x555555555555555;
}




ulong FUN_00102973(long param_1,ulong param_2,long param_3)

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




void FUN_001018ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b46(param_2);
  FUN_00101af5(&local_21,uVar1);
  FUN_00101b58(param_1,&local_21);
  FUN_00101848(&local_21);
  uVar1 = FUN_00101be0(param_2);
  uVar2 = FUN_00101b90(param_2);
                    /* try { // try from 0010195a to 0010195e has its CatchHandler @ 00101961 */
  FUN_00101c2c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101730(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010181c(undefined8 param_1)

{
  FUN_0010199a(param_1);
  FUN_00101746(param_1);
  return;
}




void FUN_00101e22(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e7a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101b90(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_00101f3c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102d6a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102af8(void)

{
  return;
}




void FUN_001015a2(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017dc(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(100);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 00101608 to 00101645 has its CatchHandler @ 00101691 */
  FUN_00101894(local_58,&local_60);
  FUN_00101894(local_58,&local_60);
  FUN_00101894(local_58,&local_60);
  FUN_001018ce(local_38,local_58);
                    /* try { // try from 0010164d to 00101651 has its CatchHandler @ 0010167c */
  FUN_001023cc(local_38);
  FUN_001017fc(local_38);
  FUN_001017fc(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102dc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fee(void)

{
  return;
}




void FUN_00102a95(void)

{
  return;
}




void FUN_001017bc(undefined8 param_1)

{
  FUN_0010181c(param_1);
  return;
}




undefined8 FUN_00101f16(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102178(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001021cd(undefined8 param_1)

{
  return param_1;
}




long FUN_0010210e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_00102caf(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001025a5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102166(undefined8 param_1)

{
  return param_1;
}




void FUN_00102701(undefined4 param_1)

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




void FUN_00102b03(void)

{
  return;
}




void FUN_001019ba(void)

{
  return;
}




void FUN_00102034(undefined8 param_1)

{
  FUN_0010219f(param_1,1);
  return;
}




void FUN_001020d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d46(param_3);
  FUN_001021e0(param_1,param_2,uVar1);
  return;
}




void FUN_001025ff(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102a52(void)

{
  return 1;
}




void FUN_0010280f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102ac1(void)

{
  return;
}




void FUN_00101894(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a48(param_1);
  FUN_00101a94(param_1,uVar1,param_2);
  return;
}




void FUN_001025d7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010257f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102034(param_1);
  uVar2 = FUN_00101cbc(param_1);
  FUN_00102058(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d46(param_2);
  uVar4 = FUN_00101c9a(uVar1);
  FUN_001020d1(uVar2,uVar4,uVar3);
  FUN_0010210e(local_38,0);
  FUN_00102092(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101e7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102130(param_1,param_2);
  return;
}




void FUN_00102ae2(void)

{
  return;
}




void FUN_001027dc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001019ca(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c9a(local_20);
    uVar3 = FUN_00101cbc(param_1);
    FUN_00101cce(uVar3,uVar2);
    FUN_00101cf8(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101cce(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fee(param_1,param_2);
  return;
}




void FUN_00102224(undefined8 param_1)

{
  FUN_00102292(param_1);
  return;
}




void FUN_0010255e(undefined8 *param_1)

{
  FUN_00101c9a(*param_1);
  return;
}




void FUN_00102144(long param_1)

{
  FUN_00102224(param_1 + 0x10);
  return;
}




void FUN_001026ab(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




bool FUN_00102c54(pthread_t *param_1)

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




undefined8 FUN_00101a48(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d28(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102655(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102783(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102aed(void)

{
  return;
}




void FUN_00102b50(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_0010286f(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101be0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101766(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010219f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102242(param_1,param_2,0);
  return;
}




undefined8 FUN_001016cb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010257f("Calling good()...");
  FUN_001016bb();
  FUN_0010257f("Finished good()");
  FUN_0010257f("Calling bad()...");
  FUN_00101489();
  FUN_0010257f("Finished bad()");
  return 0;
}




void FUN_00101f82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d46(param_2);
  uVar2 = FUN_00101a48(param_1);
  FUN_00101a94(param_1,uVar2,uVar1);
  return;
}




void FUN_00102001(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102178(param_1,param_2,param_3);
  return;
}




void FUN_00102092(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102001(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102b24(void)

{
  return;
}




void FUN_00102b19(void)

{
  return;
}



