
void FUN_00101864(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00101bd8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cc6(void)

{
  return 0;
}




int FUN_00101cd5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d47(void)

{
  return;
}




undefined8 FUN_00101dec(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101db5,local_18);
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




void FUN_00101d31(void)

{
  return;
}




void FUN_001019c0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101890(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a13(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d3c(void)

{
  return;
}




void FUN_00101fb0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101910(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101cfa(void)

{
  return;
}




void FUN_00101fee(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010176f(void)

{
  FUN_00101694();
  return;
}




void FUN_00101db5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a41(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d68(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105018 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_00101cef(void)

{
  return;
}




void FUN_00101d5d(void)

{
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffbc : 0x001016e3 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101694(void)

{
  long in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  ulong local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_44;
  local_28 = &local_44;
  local_40 = 0x14;
  local_44 = 0x14;
  local_3c = 0x14;
  local_20 = 0x50;
  local_18 = (undefined4 *)operator_new__(0x50);
  for (local_38 = 0; local_38 < (ulong)(long)local_3c; local_38 = local_38 + 1) {
    local_18[local_38] = 0;
  }
  FUN_0010183c(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a74(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101cb7(void)

{
  return 1;
}




void FUN_0010180a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001018e5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101daa(void)

{
  return;
}




ulong FUN_00101ad4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d26(void)

{
  return;
}




void FUN_00101d9f(void)

{
  return;
}




bool FUN_00101eb9(pthread_t *param_1)

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




void FUN_00101d05(void)

{
  return;
}




undefined8 FUN_00101f14(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010177f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017e4("Calling good()...");
  FUN_0010176f();
  FUN_001017e4("Finished good()");
  FUN_001017e4("Calling bad()...");
  FUN_001014e9();
  FUN_001017e4("Finished bad()");
  return 0;
}




void FUN_0010183c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101966(undefined4 param_1)

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




void FUN_00101d10(void)

{
  return;
}




void FUN_00101d1b(void)

{
  return;
}




void FUN_00101d52(void)

{
  return;
}




void FUN_0010193b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d73(void)

{
  return;
}




void FUN_00101d7e(void)

{
  return;
}




undefined8 FUN_00101f37(undefined8 *param_1)

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




void FUN_001018ba(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102090(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014e9(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  ulong local_60;
  int *local_58;
  int *local_50;
  ulong local_48;
  undefined4 *local_40;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_74;
  local_50 = &local_74;
  local_74 = -1;
  local_70 = -1;
  local_6c = 0xffffffff;
  local_6c = socket(2,1,6);
  if (local_6c != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(local_6c,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_6c,local_1e,0xd,0);
      local_68 = (int)sVar2;
      if ((local_68 != -1) && (local_68 != 0)) {
        local_1e[local_68] = '\0';
        local_70 = atoi(local_1e);
      }
    }
  }
  if (local_6c != -1) {
    close(local_6c);
  }
  *local_58 = local_70;
  local_64 = *local_50;
  local_48 = (long)local_64 << 2;
  local_40 = (undefined4 *)operator_new__(local_48);
  for (local_60 = 0; local_60 < (ulong)(long)local_64; local_60 = local_60 + 1) {
    local_40[local_60] = 0;
  }
  FUN_0010183c(*local_40);
  if (local_40 != (undefined4 *)0x0) {
    operator_delete__(local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001017e4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d89(void)

{
  return;
}




void FUN_00101fcf(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102020(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d94(void)

{
  return;
}




void FUN_001019e8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}



