
void FUN_0010206c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102c5e(void)

{
  return;
}




void FUN_0010295f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010246c(undefined8 param_1)

{
  FUN_001024da(param_1);
  return;
}




undefined8 FUN_00102dff(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020c4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010237a(param_1,param_2);
  return;
}




void FUN_00102238(void)

{
  return;
}




void FUN_00101a06(undefined8 param_1)

{
  FUN_00101a66(param_1);
  return;
}




void FUN_00101f42(undefined8 param_1,undefined8 param_2)

{
  FUN_0010224b(param_1,param_2,1);
  return;
}




void FUN_00101ade(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c92(param_1);
  FUN_00101cde(param_1,uVar1,param_2);
  return;
}




void FUN_00102100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ee(param_2);
  FUN_001020c4(param_1,uVar1);
  FUN_00101990(param_1);
  return;
}




void FUN_00101a66(undefined8 param_1)

{
  FUN_00101be4(param_1);
  FUN_00101990(param_1);
  return;
}




void FUN_001026cf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102c11(void)

{
  return;
}




void FUN_001028d3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ed4(void)

{
  return;
}




undefined8 FUN_00101d3f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102096(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001027a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102160(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010277b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102cd7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ca0,local_18);
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




void FUN_001028fe(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c48(void)

{
  return;
}




ulong FUN_00102ac3(long param_1,ulong param_2,long param_3)

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




bool FUN_00102da4(pthread_t *param_1)

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




void FUN_00102c06(void)

{
  return;
}




undefined8 FUN_00101fa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010227e(param_1);
  uVar2 = FUN_00101f06(param_1);
  FUN_001022a2(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f90(param_2);
  uVar4 = FUN_00101ee4(uVar1);
  FUN_0010231b(uVar2,uVar4,uVar3);
  FUN_00102358(local_38,0);
  FUN_001022dc(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102c1c(void)

{
  return;
}




void FUN_00101f72(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101905(void)

{
  FUN_0010180e();
  return;
}




undefined8 FUN_00102bb1(void)

{
  return 0;
}




void FUN_00102c32(void)

{
  return;
}




undefined8 FUN_00102417(undefined8 param_1)

{
  return param_1;
}




void FUN_0010231b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f90(param_3);
  FUN_0010242a(param_1,param_2,uVar1);
  return;
}




void FUN_001023e9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010248a(param_1,param_2,0);
  return;
}




void FUN_00101be4(undefined8 param_1)

{
  FUN_00101ed4(param_1);
  return;
}




void FUN_001026ae(undefined8 *param_1)

{
  FUN_00101ee4(*param_1);
  return;
}




void FUN_001019b0(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102ca0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001027fb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102c3d(void)

{
  return;
}




undefined8 FUN_00101c92(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f72(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028ab(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102e22(undefined8 *param_1)

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




void FUN_00102504(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010262c(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00102727(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_001021aa(undefined8 *param_1)

{
  FUN_0010238e(*param_1);
  return;
}




void FUN_00101ee4(long param_1)

{
  FUN_0010221a(param_1 + 0x10);
  return;
}




void FUN_0010292c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101544) */
/* WARNING: Removing unreachable block (ram,0x00101550) */

void FUN_00101520(void)

{
  return;
}




void FUN_001015a9(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a26(local_88);
  local_98 = -1;
  local_90 = 0xffffffff;
  local_94 = -1;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_90,&local_48,0x10);
                    /* try { // try from 001016a3 to 00101795 has its CatchHandler @ 001017e1 */
    if (((iVar1 != -1) && (iVar1 = listen(local_90,5), iVar1 != -1)) &&
       (local_94 = accept(local_90,(sockaddr *)0x0,(socklen_t *)0x0), local_94 != -1)) {
      sVar2 = recv(local_94,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_98 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  if (local_94 != -1) {
    close(local_94);
  }
  FUN_00101ade(local_88,&local_98);
  FUN_00101ade(local_88,&local_98);
  FUN_00101ade(local_88,&local_98);
  FUN_00101b18(local_68,local_88);
                    /* try { // try from 0010179d to 001017a1 has its CatchHandler @ 001017cc */
  FUN_00102504(local_68);
  FUN_00101a46(local_68);
  FUN_00101a46(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102c69(void)

{
  return;
}




void FUN_0010262c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101c92(param_1);
  FUN_0010268a(&local_18);
  FUN_001026ae(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bf0(void)

{
  return;
}




void FUN_00102c8a(void)

{
  return;
}




void FUN_00102598(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010262c(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00102727(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00102c27(void)

{
  return;
}




void FUN_001026f5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010224b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023c2(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_00102186(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00101e2a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102142(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101ee4(local_20);
    uVar3 = FUN_00101f06(param_1);
    FUN_00101f18(uVar3,uVar2);
    FUN_00101f42(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102ed9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001014f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101f18(undefined8 param_1,undefined8 param_2)

{
  FUN_00102238(param_1,param_2);
  return;
}




void FUN_001019e6(undefined8 param_1)

{
  FUN_00101a92(param_1);
  return;
}




void FUN_00102c95(void)

{
  return;
}




void FUN_00101e76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102160(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021aa(&local_18);
    FUN_001021cc(local_10,uVar2);
    FUN_00102186(&local_18);
  }
  return;
}




void FUN_00102bfb(void)

{
  return;
}




void FUN_00102851(undefined4 param_1)

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




void FUN_0010238e(long param_1)

{
  FUN_0010246c(param_1 + 0x10);
  return;
}




undefined8 FUN_00101915(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001026cf("Calling good()...");
  FUN_00101905();
  FUN_001026cf("Finished good()");
  FUN_001026cf("Calling bad()...");
  FUN_001015a9();
  FUN_001026cf("Finished bad()");
  return 0;
}




undefined8 FUN_00101dda(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102142(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e9b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102096(undefined8 param_1,undefined8 param_2)

{
  FUN_001020c4(param_1,param_2);
  return param_1;
}




void FUN_0010237a(void)

{
  return;
}




void FUN_00102bda(void)

{
  return;
}




void FUN_00102c53(void)

{
  return;
}




undefined8 FUN_00101f90(undefined8 param_1)

{
  return param_1;
}




void FUN_001023c2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102eba(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c74(void)

{
  return;
}




undefined8 FUN_00101d90(undefined8 param_1)

{
  return param_1;
}




void FUN_0010180e(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a26(local_58);
  local_5c = 0x14;
                    /* try { // try from 00101852 to 0010188f has its CatchHandler @ 001018db */
  FUN_00101ade(local_58,&local_5c);
  FUN_00101ade(local_58,&local_5c);
  FUN_00101ade(local_58,&local_5c);
  FUN_00101b18(local_38,local_58);
                    /* try { // try from 00101897 to 0010189b has its CatchHandler @ 001018c6 */
  FUN_00102598(local_38);
  FUN_00101a46(local_38);
  FUN_00101a46(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102826(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101990(undefined8 param_1)

{
  FUN_001019b0(param_1);
  return;
}




void FUN_00101cde(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f90(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fa2(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010206c(param_1,1);
  return;
}




int FUN_00102bc0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101a26(undefined8 param_1)

{
  FUN_00101a06(param_1);
  return;
}




void FUN_0010274f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010242a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101f90(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_0010197a(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101ab2(undefined8 param_1)

{
  FUN_00101c14(param_1);
  FUN_001019e6(param_1);
  return;
}




undefined8 FUN_00101f06(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010197a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a46(undefined8 param_1)

{
  FUN_00101ab2(param_1);
  return;
}




void FUN_00102727(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001024ec(void)

{
  return 0x555555555555555;
}




/* WARNING: Removing unreachable block (ram,0x00101503) */
/* WARNING: Removing unreachable block (ram,0x0010150f) */

void FUN_001014f0(void)

{
  return;
}




void FUN_001027d0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102142(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105eb0)();
  return;
}




undefined8 FUN_00102ba2(void)

{
  return 1;
}




void FUN_00102c7f(void)

{
  return;
}




void FUN_001022dc(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010224b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010248a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024ec(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_001020ee(undefined8 param_1)

{
  return param_1;
}




long FUN_00102358(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_0010227e(undefined8 param_1)

{
  FUN_001023e9(param_1,1);
  return;
}




void FUN_00101c04(void)

{
  return;
}




void FUN_00102be5(void)

{
  return;
}




ulong FUN_001029bf(long param_1,ulong param_2,long param_3)

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




void FUN_001022a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102417(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d90(param_2);
  FUN_00101d3f(&local_21,uVar1);
  FUN_00101da2(param_1,&local_21);
  FUN_00101a92(&local_21);
  uVar1 = FUN_00101e2a(param_2);
  uVar2 = FUN_00101dda(param_2);
                    /* try { // try from 00101ba4 to 00101ba8 has its CatchHandler @ 00101bab */
  FUN_00101e76(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010221a(undefined8 param_1)

{
  FUN_001023b0(param_1);
  return;
}




undefined8 FUN_001023b0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024da(undefined8 param_1)

{
  return param_1;
}




void FUN_001021cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f90(param_2);
  uVar2 = FUN_00101c92(param_1);
  FUN_00101cde(param_1,uVar2,uVar1);
  return;
}




void FUN_00101da2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ee(param_2);
  FUN_00102100(param_1,uVar1);
  return;
}




void FUN_00101a92(undefined8 param_1)

{
  FUN_00101c04(param_1);
  return;
}




void FUN_00102f80(void)

{
  return;
}




long * FUN_0010268a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}



