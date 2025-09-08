
void FUN_00101509(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  int local_60;
  int local_5c;
  ulong local_50;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = -1;
  if (DAT_00105010 == 5) {
    local_5c = -1;
    __fd = socket(2,1,6);
    if (__fd != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data[2] = '\0';
      local_38.sa_data[3] = '\0';
      local_38.sa_data[4] = '\0';
      local_38.sa_data[5] = '\0';
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar1 = bind(__fd,&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
         (local_5c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_5c != -1)) {
        sVar2 = recv(local_5c,local_1e,0xd,0);
        iVar1 = (int)sVar2;
        if ((iVar1 != -1) && (iVar1 != 0)) {
          local_1e[iVar1] = '\0';
          local_60 = atoi(local_1e);
        }
      }
    }
    if (__fd != -1) {
      close(__fd);
    }
    if (local_5c != -1) {
      close(local_5c);
    }
  }
  puVar3 = (undefined4 *)operator_new__((long)local_60 << 2);
  for (local_50 = 0; local_50 < (ulong)(long)local_60; local_50 = local_50 + 1) {
    puVar3[local_50] = 0;
  }
  FUN_001018f3(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001019f2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a77(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a9f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101da6(void)

{
  return;
}




void FUN_00101e1f(void)

{
  return;
}




undefined8 FUN_00101d7d(void)

{
  return 0;
}




void FUN_001018f3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102086(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001016e3(void)

{
  undefined4 *puVar1;
  int local_24;
  ulong local_20;
  
  local_24 = -1;
  if (DAT_00105010 == 5) {
    local_24 = 0x14;
  }
  else {
    FUN_0010189b("Benign, fixed string");
  }
  puVar1 = (undefined4 *)operator_new__((long)local_24 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001018f3(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




undefined8 FUN_00101fcb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101947(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




int FUN_00101d8c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e4b(void)

{
  return;
}




undefined8 FUN_00101836(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010189b("Calling good()...");
  FUN_00101821();
  FUN_0010189b("Finished good()");
  FUN_0010189b("Calling bad()...");
  FUN_00101509();
  FUN_0010189b("Finished bad()");
  return 0;
}




void FUN_00101af8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e61(void)

{
  return;
}




void FUN_001020d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_00101e14(void)

{
  return;
}




undefined8 FUN_00101fee(undefined8 *param_1)

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




void FUN_00101971(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dc7(void)

{
  return;
}




void FUN_00101aca(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101dbc(void)

{
  return;
}




void FUN_0010199c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a1d(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101821(void)

{
  FUN_001016e3();
  FUN_00101789();
  return;
}




void FUN_00102067(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




bool FUN_00101f70(pthread_t *param_1)

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




void FUN_00101e09(void)

{
  return;
}




void FUN_001019c7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101d6e(void)

{
  return 1;
}




void FUN_00101dfe(void)

{
  return;
}




void FUN_00101e2a(void)

{
  return;
}




void FUN_00102140(void)

{
  return;
}




void FUN_00101b2b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101e35(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101450();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_001018c1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101b8b(long param_1,ulong param_2,long param_3)

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




ulong FUN_00101c8f(long param_1,ulong param_2,long param_3)

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




void FUN_00101db1(void)

{
  return;
}




void FUN_0010189b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dd2(void)

{
  return;
}




void FUN_00101ddd(void)

{
  return;
}




void FUN_00101e40(void)

{
  return;
}




void FUN_00101789(void)

{
  undefined4 *puVar1;
  int local_24;
  ulong local_20;
  
  local_24 = -1;
  if (DAT_00105010 == 5) {
    local_24 = 0x14;
  }
  puVar1 = (undefined4 *)operator_new__((long)local_24 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001018f3(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




undefined8 FUN_00101ea3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e6c,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101e56(void)

{
  return;
}




void FUN_00101de8(void)

{
  return;
}




void FUN_00101e6c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001020a5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101df3(void)

{
  return;
}




void FUN_0010191b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}



