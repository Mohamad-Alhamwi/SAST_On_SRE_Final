
void FUN_00102bce(void)

{
  return;
}




void FUN_00101c08(undefined8 param_1)

{
  FUN_00101c68(param_1);
  return;
}




void FUN_00102bd9(void)

{
  return;
}




undefined8 FUN_00101f46(undefined8 param_1)

{
  return param_1;
}




void FUN_001021e2(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102508(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102105(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101b7b(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101fe0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024e6(long param_1)

{
  FUN_001025b2(param_1 + 0x10);
  return;
}




void FUN_00102bb8(void)

{
  return;
}




void FUN_00102434(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001023a3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101a0f(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c28(local_58);
  local_5c = 0x14;
                    /* try { // try from 00101a53 to 00101a90 has its CatchHandler @ 00101adc */
  FUN_00101ce0(local_58,&local_5c);
  FUN_00101ce0(local_58,&local_5c);
  FUN_00101ce0(local_58,&local_5c);
  FUN_00101d1a(local_38,local_58);
                    /* try { // try from 00101a98 to 00101a9c has its CatchHandler @ 00101ac7 */
  FUN_0010161d(local_38);
  FUN_00101c48(local_38);
  FUN_00101c48(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b2c(void)

{
  return 0;
}




int FUN_00102b3b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102b55(void)

{
  return;
}




void FUN_00101e16(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017c0(local_20);
    uVar3 = FUN_0010209a(param_1);
    FUN_001020ac(uVar3,uVar2);
    FUN_001020d6(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102ef0(void)

{
  return;
}




void FUN_00101ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101710(param_1);
  FUN_00101e94(param_1,uVar1,param_2);
  return;
}




void FUN_001020d6(undefined8 param_1,undefined8 param_2)

{
  FUN_001023a3(param_1,param_2,1);
  return;
}




void FUN_00101e06(void)

{
  return;
}




void FUN_00101bb2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102276(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102264(param_2);
  FUN_0010223a(param_1,uVar1);
  FUN_00101b92(param_1);
  return;
}




void FUN_00101812(void)

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
  FUN_00101c28(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001018c5 to 00101996 has its CatchHandler @ 001019e2 */
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
  FUN_00101ce0(local_88,&local_94);
  FUN_00101ce0(local_88,&local_94);
  FUN_00101ce0(local_88,&local_94);
  FUN_00101d1a(local_68,local_88);
                    /* try { // try from 0010199e to 001019a2 has its CatchHandler @ 001019cd */
  FUN_00101589(local_68);
  FUN_00101c48(local_68);
  FUN_00101c48(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101b06(void)

{
  FUN_00101a0f();
  return;
}




void FUN_001024d2(void)

{
  return;
}




void FUN_0010252f(undefined8 param_1,undefined8 param_2)

{
  FUN_001025d0(param_1,param_2,0);
  return;
}




undefined8 FUN_001022d6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001016b2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101710(param_1);
  FUN_0010175c(&local_18);
  FUN_00101780(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_0010175c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101b7b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001027cc(undefined4 param_1)

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




void FUN_00102b8c(void)

{
  return;
}




undefined8 FUN_00102c52(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c1b,local_18);
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




void FUN_0010274b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_001022fc(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102632(void)

{
  return 0x555555555555555;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




undefined8 FUN_00102620(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102105(param_3);
  p_Var2 = (_List_node_base *)FUN_00102118(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001021e2(param_1,1);
  return;
}




void FUN_00102826(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102879(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001023d6(undefined8 param_1)

{
  FUN_0010252f(param_1,1);
  return;
}




void FUN_0010202c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001022d6(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102320(&local_18);
    FUN_00102342(local_10,uVar2);
    FUN_001022fc(&local_18);
  }
  return;
}




void FUN_001023a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102508(param_1,param_2,param_3);
  return;
}




void FUN_00102b76(void)

{
  return;
}




void FUN_00102b6b(void)

{
  return;
}




void FUN_00101b92(undefined8 param_1)

{
  FUN_00101bb2(param_1);
  return;
}




void FUN_00102670(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_00102d1f(pthread_t *param_1)

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




void FUN_001023fa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010255d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_0010209a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101589(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001016b2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001026a2(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00101c28(undefined8 param_1)

{
  FUN_00101c08(param_1);
  return;
}




void FUN_00102c1b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102e54(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102be4(void)

{
  return;
}




void FUN_001017e2(undefined8 param_1)

{
  FUN_00101800(param_1);
  return;
}




void FUN_00102473(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102105(param_3);
  FUN_00102570(param_1,param_2,uVar1);
  return;
}




void FUN_00102c10(void)

{
  return;
}




void FUN_0010264a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010208a(void)

{
  return;
}




void FUN_00102b81(void)

{
  return;
}




void FUN_00102e35(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c94(undefined8 param_1)

{
  FUN_00101e06(param_1);
  return;
}




void FUN_001020ac(undefined8 param_1,undefined8 param_2)

{
  FUN_00102390(param_1,param_2);
  return;
}




undefined8 FUN_00101b16(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010264a("Calling good()...");
  FUN_00101b06();
  FUN_0010264a("Finished good()");
  FUN_0010264a("Calling bad()...");
  FUN_00101812();
  FUN_0010264a("Finished bad()");
  return 0;
}




void FUN_00102ba2(void)

{
  return;
}




void FUN_001022b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102b1d(void)

{
  return 1;
}




void FUN_00102b97(void)

{
  return;
}




undefined8 FUN_00101f90(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010223a(undefined8 param_1,undefined8 param_2)

{
  FUN_001024d2(param_1,param_2);
  return;
}




void FUN_001025b2(undefined8 param_1)

{
  FUN_00102620(param_1);
  return;
}




void FUN_0010161d(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001016b2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001026a2(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_001025d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102632(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101cb4(undefined8 param_1)

{
  FUN_00101e16(param_1);
  FUN_00101be8(param_1);
  return;
}




void FUN_00102c05(void)

{
  return;
}




undefined8 FUN_00102d7a(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101800(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105eb8)();
  return;
}




undefined8 FUN_00102118(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023d6(param_1);
  uVar2 = FUN_0010209a(param_1);
  FUN_001023fa(local_38,uVar2,uVar1);
  uVar3 = FUN_00102105(param_2);
  uVar4 = FUN_001017c0(uVar1);
  FUN_00102473(uVar2,uVar4,uVar3);
  FUN_001024b0(local_38,0);
  FUN_00102434(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102320(undefined8 *param_1)

{
  FUN_001024e6(*param_1);
  return;
}




void FUN_00102390(void)

{
  return;
}




undefined8 FUN_00102105(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010220c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223a(param_1,param_2);
  return param_1;
}




void FUN_001027a1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017a2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101be8(undefined8 param_1)

{
  FUN_00101c94(param_1);
  return;
}




long FUN_001024b0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001028da(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102bfa(void)

{
  return;
}




void FUN_00102776(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102bef(void)

{
  return;
}




void FUN_00101c48(undefined8 param_1)

{
  FUN_00101cb4(param_1);
  return;
}




void FUN_00101780(undefined8 *param_1)

{
  FUN_001017c0(*param_1);
  return;
}




void FUN_00102342(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102105(param_2);
  uVar2 = FUN_00101710(param_1);
  FUN_00101e94(param_1,uVar2,uVar1);
  return;
}




void FUN_00102e80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001028a7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102720(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010284e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_0010293a(long param_1,ulong param_2,long param_3)

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




void FUN_00102bad(void)

{
  return;
}




undefined8 FUN_00102d9d(undefined8 *param_1)

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




void FUN_00102bc3(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001014d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101f58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102264(param_2);
  FUN_00102276(param_1,uVar1);
  return;
}




void FUN_001026ca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00102a3e(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




undefined8 FUN_00101710(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017a2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c68(undefined8 param_1)

{
  FUN_00101de6(param_1);
  FUN_00101b92(param_1);
  return;
}




undefined8 FUN_00101ef5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010255d(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b60(void)

{
  return;
}




void FUN_00102e16(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001017c0(long param_1)

{
  FUN_001017e2(param_1 + 0x10);
  return;
}




void FUN_001026a2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001026f6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101de6(undefined8 param_1)

{
  FUN_0010208a(param_1);
  return;
}




void FUN_00101d1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101f46(param_2);
  FUN_00101ef5(&local_21,uVar1);
  FUN_00101f58(param_1,&local_21);
  FUN_00101c94(&local_21);
  uVar1 = FUN_00101fe0(param_2);
  uVar2 = FUN_00101f90(param_2);
                    /* try { // try from 00101da6 to 00101daa has its CatchHandler @ 00101dad */
  FUN_0010202c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102264(undefined8 param_1)

{
  return param_1;
}



