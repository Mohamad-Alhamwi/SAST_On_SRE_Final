
void FUN_00101e3e(void)

{
  return;
}




void FUN_001020e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101d86(void)

{
  return 0;
}




void FUN_001019a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101daf(void)

{
  return;
}




void FUN_0010178f(void)

{
  int iVar1;
  undefined4 *puVar2;
  int local_24;
  ulong local_20;
  
  local_24 = -1;
  iVar1 = FUN_00101d77();
  if (iVar1 != 0) {
    local_24 = 0x14;
  }
  puVar2 = (undefined4 *)operator_new__((long)local_24 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_001018fc(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




bool FUN_00101f79(pthread_t *param_1)

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




void FUN_001018fc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00101b94(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101ddb(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101450();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001018ca(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101e49(void)

{
  return;
}




undefined8 FUN_00101ff7(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001019d0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101aa8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e6a(void)

{
  return;
}




undefined8 FUN_0010183f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001018a4("Calling good()...");
  FUN_0010182a();
  FUN_001018a4("Finished good()");
  FUN_001018a4("Calling bad()...");
  FUN_00101509();
  FUN_001018a4("Finished bad()");
  return 0;
}




void FUN_0010197a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e07(void)

{
  return;
}




void FUN_00101b01(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102070(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101de6(void)

{
  return;
}




void FUN_00101dd0(void)

{
  return;
}




void FUN_001016e6(void)

{
  int iVar1;
  undefined4 *puVar2;
  int local_24;
  ulong local_20;
  
  local_24 = -1;
  iVar1 = FUN_00101d86();
  if (iVar1 == 0) {
    local_24 = 0x14;
  }
  else {
    FUN_001018a4("Benign, fixed string");
  }
  puVar2 = (undefined4 *)operator_new__((long)local_24 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_001018fc(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_00101dba(void)

{
  return;
}




void FUN_00101509(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  int local_60;
  int local_5c;
  ulong local_50;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = -1;
  iVar1 = FUN_00101d77();
  if (iVar1 != 0) {
    local_5c = -1;
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data[2] = '\0';
      local_38.sa_data[3] = '\0';
      local_38.sa_data[4] = '\0';
      local_38.sa_data[5] = '\0';
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = bind(iVar1,&local_38,0x10);
      if (((iVar2 != -1) && (iVar2 = listen(iVar1,5), iVar2 != -1)) &&
         (local_5c = accept(iVar1,(sockaddr *)0x0,(socklen_t *)0x0), local_5c != -1)) {
        sVar3 = recv(local_5c,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_60 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
    if (local_5c != -1) {
      close(local_5c);
    }
  }
  puVar4 = (undefined4 *)operator_new__((long)local_60 << 2);
  for (local_50 = 0; local_50 < (ulong)(long)local_60; local_50 = local_50 + 1) {
    puVar4[local_50] = 0;
  }
  FUN_001018fc(*puVar4);
  if (puVar4 != (undefined4 *)0x0) {
    operator_delete__(puVar4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00101c98(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dfc(void)

{
  return;
}




void FUN_0010208f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102150(void)

{
  return;
}




int FUN_00101d95(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e28(void)

{
  return;
}




void FUN_0010182a(void)

{
  FUN_001016e6();
  FUN_0010178f();
  return;
}




void FUN_00101e5f(void)

{
  return;
}




void FUN_00101ad3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a80(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d77(void)

{
  return 1;
}




void FUN_001020ae(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e12(void)

{
  return;
}




void FUN_00101e33(void)

{
  return;
}




void FUN_00101950(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101eac(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e75,local_18);
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




void FUN_00101a26(undefined4 param_1)

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




void FUN_00101e75(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001019fb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e54(void)

{
  return;
}




void FUN_00101b34(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101df1(void)

{
  return;
}




void FUN_001018a4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101924(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e1d(void)

{
  return;
}




void FUN_00101dc5(void)

{
  return;
}




undefined8 FUN_00101fd4(void *param_1)

{
  free(param_1);
  return 1;
}



