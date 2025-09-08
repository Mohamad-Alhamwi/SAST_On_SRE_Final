
void FUN_00102bb2(void)

{
  return;
}




void FUN_00101bec(undefined8 param_1)

{
  FUN_00101c4c(param_1);
  return;
}




void FUN_00102bbd(void)

{
  return;
}




undefined8 FUN_00101f2a(undefined8 param_1)

{
  return param_1;
}




void FUN_001021c6(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001024ec(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001020e9(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101b5f(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101fc4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010229c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024ca(long param_1)

{
  FUN_00102596(param_1 + 0x10);
  return;
}




void FUN_00102b9c(void)

{
  return;
}




void FUN_00102418(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102387(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001019f3(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c0c(local_58);
  local_5c = 0x14;
                    /* try { // try from 00101a37 to 00101a74 has its CatchHandler @ 00101ac0 */
  FUN_00101cc4(local_58,&local_5c);
  FUN_00101cc4(local_58,&local_5c);
  FUN_00101cc4(local_58,&local_5c);
  FUN_00101cfe(local_38,local_58);
                    /* try { // try from 00101a7c to 00101a80 has its CatchHandler @ 00101aab */
  FUN_001015ff(local_38);
  FUN_00101c2c(local_38);
  FUN_00101c2c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b10(void)

{
  return 0;
}




int FUN_00102b1f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102b39(void)

{
  return;
}




void FUN_00101dfa(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017a4(local_20);
    uVar3 = FUN_0010207e(param_1);
    FUN_00102090(uVar3,uVar2);
    FUN_001020ba(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102ee0(void)

{
  return;
}




void FUN_00101cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016f4(param_1);
  FUN_00101e78(param_1,uVar1,param_2);
  return;
}




void FUN_001020ba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102387(param_1,param_2,1);
  return;
}




void FUN_00101dea(void)

{
  return;
}




void FUN_00101b96(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010225a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102248(param_2);
  FUN_0010221e(param_1,uVar1);
  FUN_00101b76(param_1);
  return;
}




void FUN_001017f6(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c0c(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001018a9 to 0010197a has its CatchHandler @ 001019c6 */
    iVar1 = connect(local_90,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_90,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_94 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  FUN_00101cc4(local_88,&local_94);
  FUN_00101cc4(local_88,&local_94);
  FUN_00101cc4(local_88,&local_94);
  FUN_00101cfe(local_68,local_88);
                    /* try { // try from 00101982 to 00101986 has its CatchHandler @ 001019b1 */
  FUN_00101569(local_68);
  FUN_00101c2c(local_68);
  FUN_00101c2c(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101aea(void)

{
  FUN_001019f3();
  return;
}




void FUN_001024b6(void)

{
  return;
}




void FUN_00102513(undefined8 param_1,undefined8 param_2)

{
  FUN_001025b4(param_1,param_2,0);
  return;
}




undefined8 FUN_001022ba(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101696(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016f4(param_1);
  FUN_00101740(&local_18);
  FUN_00101764(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00101740(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101b5f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001027b0(undefined4 param_1)

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




void FUN_00102b70(void)

{
  return;
}




undefined8 FUN_00102c36(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102bff,local_18);
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




void FUN_0010272f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_001022e0(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102616(void)

{
  return 0x555555555555555;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




undefined8 FUN_00102604(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001020e9(param_3);
  p_Var2 = (_List_node_base *)FUN_001020fc(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001021c6(param_1,1);
  return;
}




void FUN_0010280a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010285d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001023ba(undefined8 param_1)

{
  FUN_00102513(param_1,1);
  return;
}




void FUN_00102010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001022ba(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102304(&local_18);
    FUN_00102326(local_10,uVar2);
    FUN_001022e0(&local_18);
  }
  return;
}




void FUN_00102387(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001024ec(param_1,param_2,param_3);
  return;
}




void FUN_00102b5a(void)

{
  return;
}




void FUN_00102b4f(void)

{
  return;
}




void FUN_00101b76(undefined8 param_1)

{
  FUN_00101b96(param_1);
  return;
}




void FUN_00102654(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_00102d03(pthread_t *param_1)

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




void FUN_001023de(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102541(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_0010207e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101569(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101696(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00102686(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101c0c(undefined8 param_1)

{
  FUN_00101bec(param_1);
  return;
}




void FUN_00102bff(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102e38(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102bc8(void)

{
  return;
}




void FUN_001017c6(undefined8 param_1)

{
  FUN_001017e4(param_1);
  return;
}




void FUN_00102457(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020e9(param_3);
  FUN_00102554(param_1,param_2,uVar1);
  return;
}




void FUN_00102bf4(void)

{
  return;
}




void FUN_0010262e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010206e(void)

{
  return;
}




void FUN_00102b65(void)

{
  return;
}




void FUN_00102e19(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c78(undefined8 param_1)

{
  FUN_00101dea(param_1);
  return;
}




void FUN_00102090(undefined8 param_1,undefined8 param_2)

{
  FUN_00102374(param_1,param_2);
  return;
}




undefined8 FUN_00101afa(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010262e("Calling good()...");
  FUN_00101aea();
  FUN_0010262e("Finished good()");
  FUN_0010262e("Calling bad()...");
  FUN_001017f6();
  FUN_0010262e("Finished bad()");
  return 0;
}




void FUN_00102b86(void)

{
  return;
}




void FUN_0010229c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102b01(void)

{
  return 1;
}




void FUN_00102b7b(void)

{
  return;
}




undefined8 FUN_00101f74(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010229c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010221e(undefined8 param_1,undefined8 param_2)

{
  FUN_001024b6(param_1,param_2);
  return;
}




void FUN_00102596(undefined8 param_1)

{
  FUN_00102604(param_1);
  return;
}




void FUN_001015ff(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101696(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00102686(*__ptr);
  free(__ptr);
  return;
}




void FUN_001025b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102616(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101c98(undefined8 param_1)

{
  FUN_00101dfa(param_1);
  FUN_00101bcc(param_1);
  return;
}




void FUN_00102be9(void)

{
  return;
}




undefined8 FUN_00102d5e(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001017e4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ec0)();
  return;
}




undefined8 FUN_001020fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023ba(param_1);
  uVar2 = FUN_0010207e(param_1);
  FUN_001023de(local_38,uVar2,uVar1);
  uVar3 = FUN_001020e9(param_2);
  uVar4 = FUN_001017a4(uVar1);
  FUN_00102457(uVar2,uVar4,uVar3);
  FUN_00102494(local_38,0);
  FUN_00102418(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102304(undefined8 *param_1)

{
  FUN_001024ca(*param_1);
  return;
}




void FUN_00102374(void)

{
  return;
}




undefined8 FUN_001020e9(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021f0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010221e(param_1,param_2);
  return param_1;
}




void FUN_00102785(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101786(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101bcc(undefined8 param_1)

{
  FUN_00101c78(param_1);
  return;
}




long FUN_00102494(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001028be(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102bde(void)

{
  return;
}




void FUN_0010275a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102bd3(void)

{
  return;
}




void FUN_00101c2c(undefined8 param_1)

{
  FUN_00101c98(param_1);
  return;
}




void FUN_00101764(undefined8 *param_1)

{
  FUN_001017a4(*param_1);
  return;
}




void FUN_00102326(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001020e9(param_2);
  uVar2 = FUN_001016f4(param_1);
  FUN_00101e78(param_1,uVar2,uVar1);
  return;
}




void FUN_00102e70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010288b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102704(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102832(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_0010291e(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b91(void)

{
  return;
}




undefined8 FUN_00102d81(undefined8 *param_1)

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




void FUN_00102ba7(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001014b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102248(param_2);
  FUN_0010225a(param_1,uVar1);
  return;
}




void FUN_001026ae(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00102a22(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined8 FUN_001016f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101786(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c4c(undefined8 param_1)

{
  FUN_00101dca(param_1);
  FUN_00101b76(param_1);
  return;
}




undefined8 FUN_00101ed9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102541(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b44(void)

{
  return;
}




void FUN_00102dfa(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001017a4(long param_1)

{
  FUN_001017c6(param_1 + 0x10);
  return;
}




void FUN_00102686(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001026da(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101dca(undefined8 param_1)

{
  FUN_0010206e(param_1);
  return;
}




void FUN_00101cfe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101f2a(param_2);
  FUN_00101ed9(&local_21,uVar1);
  FUN_00101f3c(param_1,&local_21);
  FUN_00101c78(&local_21);
  uVar1 = FUN_00101fc4(param_2);
  uVar2 = FUN_00101f74(param_2);
                    /* try { // try from 00101d8a to 00101d8e has its CatchHandler @ 00101d91 */
  FUN_00102010(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102248(undefined8 param_1)

{
  return param_1;
}



